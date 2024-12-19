
## Date Apprenticeship Begins
**Required:** Yes
The date the apprenticeship begins. `Date Apprenticeship Begins` cannot before the program registration date. Dates starting with '0' zeros must be formatted as a text number.
{'required': True}
{'name': 'Date Apprenticeship Begins', 'is_required': True, 'description': "The date the apprenticeship begins. `Date Apprenticeship Begins` cannot before the program registration date. Dates starting with '0' zeros must be formatted as a text number.", 'constraints': {'required': True}}

## Apprentice First Name
**Required:** Yes
The first name of the apprentice.
{'required': True, 'maxLength': 55}
{'name': 'Apprentice First Name', 'is_required': True, 'description': 'The first name of the apprentice.', 'constraints': {'required': True, 'maxLength': 55}}

## Apprentice Last Name
**Required:** Yes
The last name of the apprentice.
{'required': True, 'maxLength': 55}
{'name': 'Apprentice Last Name', 'is_required': True, 'description': 'The last name of the apprentice.', 'constraints': {'required': True, 'maxLength': 55}}

## Apprentice Middle Name
**Required:** No
The middle name of the apprentice.
{'maxLength': 55}
{'name': 'Apprentice Middle Name', 'is_required': False, 'description': 'The middle name of the apprentice.', 'constraints': {'maxLength': 55}}

## Apprentice Suffix
**Required:** No
The suffix to the apprentice name. Values include I, II, III, Jr., Sr.
{}
{'name': 'Apprentice Suffix', 'is_required': False, 'description': 'The suffix to the apprentice name. Values include I, II, III, Jr., Sr.', 'constraints': {}}

## Social Security Number
**Required:** No
The Apprentice social security number. This value will be encrypted.
{'unique': True}
{'name': 'Social Security Number', 'is_required': False, 'description': 'The Apprentice social security number. This value will be encrypted.', 'constraints': {'unique': True}}

## Date of Birth
**Required:** Yes
The apprentice's date of birth. Apprentice must be 16 years old. Dates starting with '0' zeros must be formatted as a Text Number
{'required': True}
{'name': 'Date of Birth', 'is_required': True, 'description': "The apprentice's date of birth. Apprentice must be 16 years old. Dates starting with '0' zeros must be formatted as a Text Number", 'constraints': {'required': True}}

## Gender
**Required:** Yes
'M' if the apprentice indicates that he is male. 'F' if the apprentice indicates that she is female. '9' if the apprentice did not self-identify.
{'required': True}
{'name': 'Gender', 'is_required': True, 'description': "'M' if the apprentice indicates that he is male. 'F' if the apprentice indicates that she is female. '9' if the apprentice did not self-identify.", 'constraints': {'required': True}}

## Employment Status
**Required:** Yes
Enter participant's employment status. Incumbent workers are defined as existing employees of the company.
{'required': True}
{'name': 'Employment Status', 'is_required': True, 'description': "Enter participant's employment status. Incumbent workers are defined as existing employees of the company.", 'constraints': {'required': True}}

## Apprentice Street Address
**Required:** Yes
The apprentice's street address.
{'required': True, 'maxLength': 55}
{'name': 'Apprentice Street Address', 'is_required': True, 'description': "The apprentice's street address.", 'constraints': {'required': True, 'maxLength': 55}}

## Apprentice City
**Required:** Yes
The apprentice's city.
{'required': True, 'maxLength': 55}
{'name': 'Apprentice City', 'is_required': True, 'description': "The apprentice's city.", 'constraints': {'required': True, 'maxLength': 55}}

## Apprentice State
**Required:** Yes
The apprentice's state.
{'required': True, 'maxLength': 2}
{'name': 'Apprentice State', 'is_required': True, 'description': "The apprentice's state.", 'constraints': {'required': True, 'maxLength': 2}}

## Apprentice 5-Digit Zip Code
**Required:** Yes
The apprentice's 5-digit zip code.
{'required': True, 'pattern': '^[0-9]{5}', 'maxLength': 5}
{'name': 'Apprentice 5-Digit Zip Code', 'is_required': True, 'description': "The apprentice's 5-digit zip code.", 'constraints': {'required': True, 'pattern': '^[0-9]{5}', 'maxLength': 5}}

## Telephone
**Required:** No
The apprentice's telephone number.
{}
{'name': 'Telephone', 'is_required': False, 'description': "The apprentice's telephone number.", 'constraints': {}}

## Email
**Required:** No
The apprentice's email address.
{}
{'name': 'Email', 'is_required': False, 'description': "The apprentice's email address.", 'constraints': {}}

## Employer
**Required:** No
The unique identifier listed in the Employer tab for the Apprentice's Occupation. These identifiers are unique for each Employer listed.
{}
{'name': 'Employer', 'is_required': False, 'description': "The unique identifier listed in the Employer tab for the Apprentice's Occupation. These identifiers are unique for each Employer listed.", 'constraints': {}}

## Ethnicity Hispanic / Latino
**Required:** Yes
If the apprentice indicates being a person of Cuban, Mexican, Puerto Rican, South or Central American, or other Spanish culture in origin, regardless of race, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '2'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.
{'required': True}
{'name': 'Ethnicity Hispanic / Latino', 'is_required': True, 'description': "If the apprentice indicates being a person of Cuban, Mexican, Puerto Rican, South or Central American, or other Spanish culture in origin, regardless of race, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '2'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.", 'constraints': {'required': True}}

## Race-American Indian / Alaskan Native
**Required:** Yes
If the apprentice indicates origins in any of the original peoples of North America and South America (including Central America), and who maintains cultural identification through tribal affiliation or community recognition, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.
{'required': True}
{'name': 'Race-American Indian / Alaskan Native', 'is_required': True, 'description': "If the apprentice indicates origins in any of the original peoples of North America and South America (including Central America), and who maintains cultural identification through tribal affiliation or community recognition, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.", 'constraints': {'required': True}}

## Asian
**Required:** Yes
If the apprentice indicates having origins in any of the original peoples of the Far East, Southeast Asia, or the Indian Subcontinent (e.g., India, Pakistan, Bangladesh, Sri Lanka, Nepal, Sikkim, and Bhutan), the value of this field is '1'. This area includes, for example, Cambodia, China, Japan, Korea, Malaysia, Pakistan, the Philippine Islands, Thailand, and Vietnam. If the apprentice does not meet any of these conditions, record '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.
{'required': True}
{'name': 'Asian', 'is_required': True, 'description': "If the apprentice indicates having origins in any of the original peoples of the Far East, Southeast Asia, or the Indian Subcontinent (e.g., India, Pakistan, Bangladesh, Sri Lanka, Nepal, Sikkim, and Bhutan), the value of this field is '1'. This area includes, for example, Cambodia, China, Japan, Korea, Malaysia, Pakistan, the Philippine Islands, Thailand, and Vietnam. If the apprentice does not meet any of these conditions, record '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.", 'constraints': {'required': True}}

## Black / African American
**Required:** Yes
If the apprentice indicates having origins in any of the black racial groups of Africa, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.
{'required': True}
{'name': 'Black / African American', 'is_required': True, 'description': "If the apprentice indicates having origins in any of the black racial groups of Africa, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.", 'constraints': {'required': True}}

## Native Hawaiian / Other Pacific Islander
**Required:** Yes
If the apprentice indicates having origins in any of the original peoples of Hawaii, Guam, Samoa, or other Pacific Islands, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.
{'required': True}
{'name': 'Native Hawaiian / Other Pacific Islander', 'is_required': True, 'description': "If the apprentice indicates having origins in any of the original peoples of Hawaii, Guam, Samoa, or other Pacific Islands, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.", 'constraints': {'required': True}}

## White
**Required:** Yes
If the apprentice indicates having origins in any of the original peoples of Europe, the Middle East, or North Africa, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.
{'required': True}
{'name': 'White', 'is_required': True, 'description': "If the apprentice indicates having origins in any of the original peoples of Europe, the Middle East, or North Africa, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify ethnicity, the value of this field is '9'.", 'constraints': {'required': True}}

## Veteran Status
**Required:** Yes
If the apprentice indicates having served on active duty in the armed forces and who was discharged or released from such service under conditions other than dishonorable, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify veteran status, the value of this field is '9'.
{'required': True}
{'name': 'Veteran Status', 'is_required': True, 'description': "If the apprentice indicates having served on active duty in the armed forces and who was discharged or released from such service under conditions other than dishonorable, the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify veteran status, the value of this field is '9'.", 'constraints': {'required': True}}

## Apprentice Disability Status
**Required:** Yes
If the apprentice indicates having any "disability," as defined in Section 3(2)(a) of the Americans with Disabilities Act of 1990 (42 U.S.C. 12102). Under that definition, a "disability" is a physical or mental impairment that substantially limits one or more of the person's major life activities. (For definitions and examples of "physical or mental impairment" and "major life activities," see paragraphs (1) and (2) of the definition of the term "disability" in 29 CFR 37.4, the definition section of the WIA non-discrimination regulations.), the value of this field is '1'. If the apprentice does not meet any of these conditions, the value of this field is '0'. If the apprentice does not self-identify disability status, the value of this field is '9'.
{'required': True}
{'name': 'Apprentice Disability Status', 'is_required': True, 'description': 'If the apprentice indicates having any "disability," as defined in Section 3(2)(a) of the Americans with Disabilities Act of 1990 (42 U.S.C. 12102). Under that definition, a "disability" is a physical or mental impairment that substantially limits one or more of the person\'s major life activities. (For definitions and examples of "physical or mental impairment" and "major life activities," see paragraphs (1) and (2) of the definition of the term "disability" in 29 CFR 37.4, the definition section of the WIA non-discrimination regulations.), the value of this field is \'1\'. If the apprentice does not meet any of these conditions, the value of this field is \'0\'. If the apprentice does not self-identify disability status, the value of this field is \'9\'.', 'constraints': {'required': True}}

## Apprentice Education Level
**Required:** Yes
The Apprentice's education status.
{'required': True}
{'name': 'Apprentice Education Level', 'is_required': True, 'description': "The Apprentice's education status.", 'constraints': {'required': True}}

## Occupation
**Required:** Yes
Enter the unique identifier listed in the Occupation tab for the apprentice's occupation. These identifiers are unique for each occupation listed.
{'required': True}
{'name': 'Occupation', 'is_required': True, 'description': "Enter the unique identifier listed in the Occupation tab for the apprentice's occupation. These identifiers are unique for each occupation listed.", 'constraints': {'required': True}}

## Related Technical Instruction Provider
**Required:** Yes
Enter the unique identifier listed in the RTI Providers tab for the apprentice's occupation. These identifiers are unique for each RTI Providers listed.
{'required': True}
{'name': 'Related Technical Instruction Provider', 'is_required': True, 'description': "Enter the unique identifier listed in the RTI Providers tab for the apprentice's occupation. These identifiers are unique for each RTI Providers listed.", 'constraints': {'required': True}}

## Credit for previous experience
**Required:** No
Enter if any apprentice credit for previous experience (Note: If no credit is given, enter 0).
{'maxLength': 255}
{'name': 'Credit for previous experience', 'is_required': False, 'description': 'Enter if any apprentice credit for previous experience (Note: If no credit is given, enter 0).', 'constraints': {'maxLength': 255}}

## Credit for Previous Related Training In Hours
**Required:** No
Enter apprentice credit for previous related training in hours (Note: If no credit is given, enter 0).
{}
{'name': 'Credit for Previous Related Training In Hours', 'is_required': False, 'description': 'Enter apprentice credit for previous related training in hours (Note: If no credit is given, enter 0).', 'constraints': {}}

## Prior Wages
**Required:** Yes
Enter the apprentices hourly prior wage.
{'required': True}
{'name': 'Prior Wages', 'is_required': True, 'description': 'Enter the apprentices hourly prior wage.', 'constraints': {'required': True}}

## Prior Wage Units
**Required:** Yes
Enter the apprentice prior wage units.
{'required': True}
{'name': 'Prior Wage Units', 'is_required': True, 'description': 'Enter the apprentice prior wage units.', 'constraints': {'required': True}}

## Entry Wages
**Required:** Yes
Enter the apprentices hourly entry wage. This wage cannot be less than the apprentice hourly entry wage for the occupation.
{'required': True}
{'name': 'Entry Wages', 'is_required': True, 'description': 'Enter the apprentices hourly entry wage. This wage cannot be less than the apprentice hourly entry wage for the occupation.', 'constraints': {'required': True}}

## Entry Wage Units
**Required:** Yes
Enter the apprentice entry wage units.
{'required': True}
{'name': 'Entry Wage Units', 'is_required': True, 'description': 'Enter the apprentice entry wage units.', 'constraints': {'required': True}}

## Wage Schedule
**Required:** Yes
Enter the unique identifier listed in the Wage Schedules tab for the apprentice's occupation. These identifiers are unique for each wage schedule listed.
{'required': True}
{'name': 'Wage Schedule', 'is_required': True, 'description': "Enter the unique identifier listed in the Wage Schedules tab for the apprentice's occupation. These identifiers are unique for each wage schedule listed.", 'constraints': {'required': True}}

## Previously Completed Career Lattice Levels
**Required:** No
Enter the unique identifier for all previously completed Career Lattice Levels (separated by a semicolon).
{}
{'name': 'Previously Completed Career Lattice Levels', 'is_required': False, 'description': 'Enter the unique identifier for all previously completed Career Lattice Levels (separated by a semicolon).', 'constraints': {}}

## Career Connection
**Required:** No
Enter the apprentice's career connection.
{}
{'name': 'Career Connection', 'is_required': False, 'description': "Enter the apprentice's career connection.", 'constraints': {}}

## WIOA Participant
**Required:** No
If WIOA Participant exists, record '1'. If no WIOA Participant exists, record '0'.
{}
{'name': 'WIOA Participant', 'is_required': False, 'description': "If WIOA Participant exists, record '1'. If no WIOA Participant exists, record '0'.", 'constraints': {}}

## Type
**Required:** No
Select the type.
{}
{'name': 'Type', 'is_required': False, 'description': 'Select the type.', 'constraints': {}}

## Career Linkage or Direct Entry
**Required:** No
Select the Career Linkage or Direct Entry types.
{}
{'name': 'Career Linkage or Direct Entry', 'is_required': False, 'description': 'Select the Career Linkage or Direct Entry types.', 'constraints': {}}

## TAA Participant
**Required:** No
If TAA Participant exists, record '1'. If no TAA Participant, record '0'.
{}
{'name': 'TAA Participant', 'is_required': False, 'description': "If TAA Participant exists, record '1'. If no TAA Participant, record '0'.", 'constraints': {}}

## On-the-Job Training Funding Sources
**Required:** No
Enter if any on-the-job training funding sources.
{'maxLength': 255}
{'name': 'On-the-Job Training Funding Sources', 'is_required': False, 'description': 'Enter if any on-the-job training funding sources.', 'constraints': {'maxLength': 255}}

## Student Status
**Required:** Yes
Enter the student status for SAA VA apprentice registration.
{'required': True}
{'name': 'Student Status', 'is_required': True, 'description': 'Enter the student status for SAA VA apprentice registration.', 'constraints': {'required': True}}

