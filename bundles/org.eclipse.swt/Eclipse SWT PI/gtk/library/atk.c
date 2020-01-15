/*******************************************************************************
 * Copyright (c) 2000, 2020 IBM Corporation and others. All rights reserved.
 * The contents of this file are made available under the terms
 * of the GNU Lesser General Public License (LGPL) Version 2.1 that
 * accompanies this distribution (lgpl-v21.txt).  The LGPL is also
 * available at http://www.gnu.org/licenses/lgpl.html.  If the version
 * of the LGPL at http://www.gnu.org is different to the version of
 * the LGPL accompanying this distribution and there is any conflict
 * between the two license versions, the terms of the LGPL accompanying
 * this distribution shall govern.
 * 
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Note: This file was auto-generated by org.eclipse.swt.tools.internal.JNIGenerator */
/* DO NOT EDIT - your changes will be lost. */

#include "swt.h"
#include "atk_structs.h"
#include "atk_stats.h"

#ifndef ATK_NATIVE
#define ATK_NATIVE(func) Java_org_eclipse_swt_internal_accessibility_gtk_ATK_##func
#endif

#ifndef NO_ATK_1ACTION_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1ACTION_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1ACTION_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_ACTION_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1ACTION_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1COMPONENT_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1COMPONENT_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1COMPONENT_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_COMPONENT_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1COMPONENT_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1EDITABLE_1TEXT_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1EDITABLE_1TEXT_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1EDITABLE_1TEXT_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_EDITABLE_TEXT_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1EDITABLE_1TEXT_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1HYPERTEXT_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1HYPERTEXT_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1HYPERTEXT_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_HYPERTEXT_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1HYPERTEXT_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1SELECTION_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1SELECTION_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1SELECTION_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_SELECTION_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1SELECTION_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TABLE_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TABLE_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TABLE_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_TABLE_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1TABLE_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TEXT_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TEXT_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TEXT_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_TEXT_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1TEXT_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1ACTION
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1ACTION)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1ACTION_FUNC);
	rc = (jlong)ATK_TYPE_ACTION;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1ACTION_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1COMPONENT
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1COMPONENT)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1COMPONENT_FUNC);
	rc = (jlong)ATK_TYPE_COMPONENT;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1COMPONENT_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1EDITABLE_1TEXT
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1EDITABLE_1TEXT)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1EDITABLE_1TEXT_FUNC);
	rc = (jlong)ATK_TYPE_EDITABLE_TEXT;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1EDITABLE_1TEXT_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1HYPERTEXT
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1HYPERTEXT)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1HYPERTEXT_FUNC);
	rc = (jlong)ATK_TYPE_HYPERTEXT;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1HYPERTEXT_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1OBJECT_1FACTORY
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1OBJECT_1FACTORY)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1OBJECT_1FACTORY_FUNC);
	rc = (jlong)ATK_TYPE_OBJECT_FACTORY;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1OBJECT_1FACTORY_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1SELECTION
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1SELECTION)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1SELECTION_FUNC);
	rc = (jlong)ATK_TYPE_SELECTION;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1SELECTION_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1TABLE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1TABLE)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1TABLE_FUNC);
	rc = (jlong)ATK_TYPE_TABLE;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1TABLE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1TEXT
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1TEXT)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1TEXT_FUNC);
	rc = (jlong)ATK_TYPE_TEXT;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1TEXT_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1TYPE_1VALUE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1TYPE_1VALUE)
	(JNIEnv *env, jclass that)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1TYPE_1VALUE_FUNC);
	rc = (jlong)ATK_TYPE_VALUE;
	ATK_NATIVE_EXIT(env, that, ATK_1TYPE_1VALUE_FUNC);
	return rc;
}
#endif

#ifndef NO_ATK_1VALUE_1GET_1IFACE
JNIEXPORT jlong JNICALL ATK_NATIVE(ATK_1VALUE_1GET_1IFACE)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, ATK_1VALUE_1GET_1IFACE_FUNC);
	rc = (jlong)ATK_VALUE_GET_IFACE(arg0);
	ATK_NATIVE_EXIT(env, that, ATK_1VALUE_1GET_1IFACE_FUNC);
	return rc;
}
#endif

#ifndef NO_AtkAttribute_1sizeof
JNIEXPORT jint JNICALL ATK_NATIVE(AtkAttribute_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, AtkAttribute_1sizeof_FUNC);
	rc = (jint)AtkAttribute_sizeof();
	ATK_NATIVE_EXIT(env, that, AtkAttribute_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_AtkTextRange_1sizeof
JNIEXPORT jint JNICALL ATK_NATIVE(AtkTextRange_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, AtkTextRange_1sizeof_FUNC);
	rc = (jint)AtkTextRange_sizeof();
	ATK_NATIVE_EXIT(env, that, AtkTextRange_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_AtkTextRectangle_1sizeof
JNIEXPORT jint JNICALL ATK_NATIVE(AtkTextRectangle_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	ATK_NATIVE_ENTER(env, that, AtkTextRectangle_1sizeof_FUNC);
	rc = (jint)AtkTextRectangle_sizeof();
	ATK_NATIVE_EXIT(env, that, AtkTextRectangle_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO__1ATK_1OBJECT_1FACTORY_1CLASS
JNIEXPORT jlong JNICALL ATK_NATIVE(_1ATK_1OBJECT_1FACTORY_1CLASS)
	(JNIEnv *env, jclass that, jlong arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, _1ATK_1OBJECT_1FACTORY_1CLASS_FUNC);
	rc = (jlong)ATK_OBJECT_FACTORY_CLASS(arg0);
	ATK_NATIVE_EXIT(env, that, _1ATK_1OBJECT_1FACTORY_1CLASS_FUNC);
	return rc;
}
#endif

#ifndef NO_atk_1object_1add_1relationship
JNIEXPORT jboolean JNICALL ATK_NATIVE(atk_1object_1add_1relationship)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1, jlong arg2)
{
	jboolean rc = 0;
	ATK_NATIVE_ENTER(env, that, atk_1object_1add_1relationship_FUNC);
	rc = (jboolean)atk_object_add_relationship((AtkObject *)arg0, (AtkRelationType)arg1, (AtkObject *)arg2);
	ATK_NATIVE_EXIT(env, that, atk_1object_1add_1relationship_FUNC);
	return rc;
}
#endif

#ifndef NO_atk_1object_1notify_1state_1change
JNIEXPORT void JNICALL ATK_NATIVE(atk_1object_1notify_1state_1change)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1, jboolean arg2)
{
	ATK_NATIVE_ENTER(env, that, atk_1object_1notify_1state_1change_FUNC);
	atk_object_notify_state_change((AtkObject *)arg0, arg1, arg2);
	ATK_NATIVE_EXIT(env, that, atk_1object_1notify_1state_1change_FUNC);
}
#endif

#ifndef NO_atk_1object_1remove_1relationship
JNIEXPORT jboolean JNICALL ATK_NATIVE(atk_1object_1remove_1relationship)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1, jlong arg2)
{
	jboolean rc = 0;
	ATK_NATIVE_ENTER(env, that, atk_1object_1remove_1relationship_FUNC);
	rc = (jboolean)atk_object_remove_relationship((AtkObject *)arg0, (AtkRelationType)arg1, (AtkObject *)arg2);
	ATK_NATIVE_EXIT(env, that, atk_1object_1remove_1relationship_FUNC);
	return rc;
}
#endif

#ifndef NO_atk_1state_1set_1add_1state
JNIEXPORT jboolean JNICALL ATK_NATIVE(atk_1state_1set_1add_1state)
	(JNIEnv *env, jclass that, jlong arg0, jint arg1)
{
	jboolean rc = 0;
	ATK_NATIVE_ENTER(env, that, atk_1state_1set_1add_1state_FUNC);
	rc = (jboolean)atk_state_set_add_state((AtkStateSet *)arg0, (AtkStateType)arg1);
	ATK_NATIVE_EXIT(env, that, atk_1state_1set_1add_1state_FUNC);
	return rc;
}
#endif

#ifndef NO_atk_1text_1attribute_1get_1name
JNIEXPORT jlong JNICALL ATK_NATIVE(atk_1text_1attribute_1get_1name)
	(JNIEnv *env, jclass that, jint arg0)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, atk_1text_1attribute_1get_1name_FUNC);
	rc = (jlong)atk_text_attribute_get_name(arg0);
	ATK_NATIVE_EXIT(env, that, atk_1text_1attribute_1get_1name_FUNC);
	return rc;
}
#endif

#ifndef NO_atk_1text_1attribute_1get_1value
JNIEXPORT jlong JNICALL ATK_NATIVE(atk_1text_1attribute_1get_1value)
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, atk_1text_1attribute_1get_1value_FUNC);
	rc = (jlong)atk_text_attribute_get_value(arg0, arg1);
	ATK_NATIVE_EXIT(env, that, atk_1text_1attribute_1get_1value_FUNC);
	return rc;
}
#endif

#ifndef NO_call__JJ
JNIEXPORT jlong JNICALL ATK_NATIVE(call__JJ)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, call__JJ_FUNC);
	rc = (jlong)((jlong (*)())arg0)(arg1);
	ATK_NATIVE_EXIT(env, that, call__JJ_FUNC);
	return rc;
}
#endif

#ifndef NO_call__JJJ
JNIEXPORT jlong JNICALL ATK_NATIVE(call__JJJ)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jlong arg2)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, call__JJJ_FUNC);
	rc = (jlong)((jlong (*)())arg0)(arg1, arg2);
	ATK_NATIVE_EXIT(env, that, call__JJJ_FUNC);
	return rc;
}
#endif

#ifndef NO_call__JJJJ
JNIEXPORT jlong JNICALL ATK_NATIVE(call__JJJJ)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jlong arg2, jlong arg3)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, call__JJJJ_FUNC);
	rc = (jlong)((jlong (*)())arg0)(arg1, arg2, arg3);
	ATK_NATIVE_EXIT(env, that, call__JJJJ_FUNC);
	return rc;
}
#endif

#ifndef NO_call__JJJJJJ
JNIEXPORT jlong JNICALL ATK_NATIVE(call__JJJJJJ)
	(JNIEnv *env, jclass that, jlong arg0, jlong arg1, jlong arg2, jlong arg3, jlong arg4, jlong arg5)
{
	jlong rc = 0;
	ATK_NATIVE_ENTER(env, that, call__JJJJJJ_FUNC);
	rc = (jlong)((jlong (*)())arg0)(arg1, arg2, arg3, arg4, arg5);
	ATK_NATIVE_EXIT(env, that, call__JJJJJJ_FUNC);
	return rc;
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2_FUNC);
	if (arg1) getAtkActionIfaceFields(env, arg1, (AtkActionIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2I)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1, jint arg2)
{
	AtkAttribute _arg1, *lparg1=NULL;
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2I_FUNC);
	if (arg1) if ((lparg1 = getAtkAttributeFields(env, arg1, &_arg1)) == NULL) goto fail;
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
fail:
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2I_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2_FUNC);
	if (arg1) getAtkComponentIfaceFields(env, arg1, (AtkComponentIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2_FUNC);
	if (arg1) getAtkEditableTextIfaceFields(env, arg1, (AtkEditableTextIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2_FUNC);
	if (arg1) getAtkHypertextIfaceFields(env, arg1, (AtkHypertextIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2_FUNC);
	if (arg1) getAtkObjectClassFields(env, arg1, (AtkObjectClass *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2_FUNC);
	if (arg1) getAtkSelectionIfaceFields(env, arg1, (AtkSelectionIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2_FUNC);
	if (arg1) getAtkTableIfaceFields(env, arg1, (AtkTableIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2_FUNC);
	if (arg1) getAtkTextIfaceFields(env, arg1, (AtkTextIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2I)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1, jint arg2)
{
	AtkTextRange _arg1, *lparg1=NULL;
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2I_FUNC);
	if (arg1) if ((lparg1 = getAtkTextRangeFields(env, arg1, &_arg1)) == NULL) goto fail;
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
fail:
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2I_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2I
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2I)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1, jint arg2)
{
	AtkTextRectangle _arg1, *lparg1=NULL;
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2I_FUNC);
	if (arg1) if ((lparg1 = getAtkTextRectangleFields(env, arg1, &_arg1)) == NULL) goto fail;
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
fail:
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2I_FUNC);
}
#endif

#ifndef NO_memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2
JNIEXPORT void JNICALL ATK_NATIVE(memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2)
	(JNIEnv *env, jclass that, jlong arg0, jobject arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2_FUNC);
	if (arg1) getAtkValueIfaceFields(env, arg1, (AtkValueIface *)arg0);
	ATK_NATIVE_EXIT(env, that, memmove__JLorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2J_FUNC);
	if (arg0) setAtkActionIfaceFields(env, arg0, (AtkActionIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkActionIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2JI
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2JI)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1, jint arg2)
{
	AtkAttribute _arg0, *lparg0=NULL;
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2JI_FUNC);
	if (arg0) if ((lparg0 = getAtkAttributeFields(env, arg0, &_arg0)) == NULL) goto fail;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
fail:
	if (arg0 && lparg0) setAtkAttributeFields(env, arg0, lparg0);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkAttribute_2JI_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2J_FUNC);
	if (arg0) setAtkComponentIfaceFields(env, arg0, (AtkComponentIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkComponentIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2J_FUNC);
	if (arg0) setAtkEditableTextIfaceFields(env, arg0, (AtkEditableTextIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkEditableTextIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2J_FUNC);
	if (arg0) setAtkHypertextIfaceFields(env, arg0, (AtkHypertextIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkHypertextIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2J_FUNC);
	if (arg0) setAtkObjectClassFields(env, arg0, (AtkObjectClass *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkObjectClass_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2J_FUNC);
	if (arg0) setAtkSelectionIfaceFields(env, arg0, (AtkSelectionIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkSelectionIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2J_FUNC);
	if (arg0) setAtkTableIfaceFields(env, arg0, (AtkTableIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTableIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2J_FUNC);
	if (arg0) setAtkTextIfaceFields(env, arg0, (AtkTextIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextIface_2J_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2JI
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2JI)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1, jint arg2)
{
	AtkTextRange _arg0, *lparg0=NULL;
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2JI_FUNC);
	if (arg0) if ((lparg0 = getAtkTextRangeFields(env, arg0, &_arg0)) == NULL) goto fail;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
fail:
	if (arg0 && lparg0) setAtkTextRangeFields(env, arg0, lparg0);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRange_2JI_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2JI
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2JI)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1, jint arg2)
{
	AtkTextRectangle _arg0, *lparg0=NULL;
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2JI_FUNC);
	if (arg0) if ((lparg0 = getAtkTextRectangleFields(env, arg0, &_arg0)) == NULL) goto fail;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
fail:
	if (arg0 && lparg0) setAtkTextRectangleFields(env, arg0, lparg0);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkTextRectangle_2JI_FUNC);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2J
JNIEXPORT void JNICALL ATK_NATIVE(memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2J)
	(JNIEnv *env, jclass that, jobject arg0, jlong arg1)
{
	ATK_NATIVE_ENTER(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2J_FUNC);
	if (arg0) setAtkValueIfaceFields(env, arg0, (AtkValueIface *)arg1);
	ATK_NATIVE_EXIT(env, that, memmove__Lorg_eclipse_swt_internal_accessibility_gtk_AtkValueIface_2J_FUNC);
}
#endif

