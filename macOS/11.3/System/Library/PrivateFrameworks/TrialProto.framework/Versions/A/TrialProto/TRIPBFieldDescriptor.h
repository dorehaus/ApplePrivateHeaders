/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TrialProto/TrialProto-Structs.h>
@class TRIPBOneofDescriptor, NSString, TRIPBEnumDescriptor;

@interface TRIPBFieldDescriptor : NSObject {

	TRIPBMessageFieldDescription* description_;
	TRIPBOneofDescriptor* containingOneof_;
	SEL getSel_;
	SEL setSel_;
	SEL hasOrCountSel_;
	SEL setHasSel_;
	SCD_Union_TR6 defaultValue_;
	Class msgClass_;
	SCD_Union_TR7* enumHandling_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned number; 
@property (nonatomic,readonly) unsigned char dataType; 
@property (nonatomic,readonly) char hasDefaultValue; 
@property (nonatomic,readonly) /*function pointer*/void* defaultValue; 
@property (getter=isRequired,nonatomic,readonly) char required; 
@property (getter=isOptional,nonatomic,readonly) char optional; 
@property (nonatomic,readonly) unsigned char fieldType; 
@property (nonatomic,readonly) unsigned char mapKeyDataType; 
@property (getter=isPackable,nonatomic,readonly) char packable; 
@property (nonatomic,readonly) TRIPBOneofDescriptor * containingOneof; 
@property (nonatomic,readonly) Class msgClass; 
@property (nonatomic,readonly) TRIPBEnumDescriptor * enumDescriptor; 
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(unsigned char)dataType;
-(unsigned)number;
-(char)isOptional;
-(/*function pointer*/void*)defaultValue;
-(unsigned char)fieldType;
-(Class)msgClass;
-(unsigned char)mapKeyDataType;
-(char)isValidEnumValue:(int)arg1 ;
-(id)textFormatName;
-(TRIPBEnumDescriptor *)enumDescriptor;
-(char)isRequired;
-(char)isPackable;
-(id)initWithFieldDescription:(void*)arg1 includesDefault:(char)arg2 syntax:(unsigned char)arg3 ;
-(char)hasDefaultValue;
-(TRIPBOneofDescriptor *)containingOneof;
@end

