/*
*	Copyright 2009 Griffin Software
*
*	Licensed under the Apache License, Version 2.0 (the "License");
*	you may not use this file except in compliance with the License.
*	You may obtain a copy of the License at
*
*		http://www.apache.org/licenses/LICENSE-2.0
*
*	Unless required by applicable law or agreed to in writing, software
*	distributed under the License is distributed on an "AS IS" BASIS,
*	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*	See the License for the specific language governing permissions and
*	limitations under the License. 
*/

#pragma once

enum CharClass
{
	CharClass_Letter,
	CharClass_Digit,
	CharClass_Other
};

bool		IsCppIdSeparator(wchar_t chr);
bool		IsCppIdStart(wchar_t chr);
bool		IsCppKeyword(const wchar_t* str, unsigned int len);
CharClass	GetCharClass(wchar_t chr);