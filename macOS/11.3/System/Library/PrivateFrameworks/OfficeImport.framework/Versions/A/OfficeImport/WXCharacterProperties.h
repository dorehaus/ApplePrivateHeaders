/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXCharacterProperties : NSObject
+(id)underlineEnumMap;
+(char)readBooleanCharacterProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(void)readReflection:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(void)readShadowForTarget:(id)arg1 fromXmlNode:(xmlNode*)arg2 state:(id)arg3 ;
+(id)ligaturesEnumMap;
+(id)highlightEnumMap;
+(id)verticalAlignEnumMap;
+(id)emphasisMarkEnumMap;
+(id)fontHintEnumMap;
+(char)readBooleanCharacterMultipleProperty:(xmlNode*)arg1 propertyName:(const char*)arg2 attributeName:(const char*)arg3 outValue:(int*)arg4 state:(id)arg5 ;
+(id)twoLineBracketsEnumMap;
+(id)readFillColor:(xmlNode*)arg1 forTarget:(id)arg2 state:(id)arg3 ;
+(char)isBooleanCharacterPropertyTrue:(int)arg1 ;
+(void)readFrom:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2 ;
@end

