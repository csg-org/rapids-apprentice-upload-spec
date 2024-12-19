from frictionless import Schema
from jinja2 import Template

# Load the table schema
schema = Schema.from_descriptor('tableschema.json')

# Define the Jinja2 template
template = Template("""{% for field in fields %}
## {{ field.name }}

**Required:** {{ 'Yes' if field.is_required else 'No' }}

{{ field.description }}
{% endfor %}""")

# Prepare the data for the template
fields = []
for field_name in schema.field_names:
    field = schema.get_field(field_name)
    fields.append({
        'name': field.name,
        'is_required': field.constraints.get('required', False),
        'description': field.description,
        'constraints': field.constraints,
    })

# Render the template with the data
output = template.render(fields=fields)
print(output)
