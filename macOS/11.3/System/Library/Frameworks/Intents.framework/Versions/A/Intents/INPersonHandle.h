/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPersonHandleExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding> {

	char _suggested;
	NSString* _value;
	long long _type;
	NSString* _label;
	long long _emergencyType;

}

@property (readonly) long long emergencyType;                        //@synthesize emergencyType=_emergencyType - In the implementation block
@property (getter=isSuggested,readonly) char suggested;              //@synthesize suggested=_suggested - In the implementation block
@property (copy,readonly) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)value;
-(NSString *)label;
-(id)_dictionaryRepresentation;
-(id)initWithValue:(id)arg1 type:(long long)arg2 ;
-(char)isSuggested;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 suggested:(char)arg4 ;
-(id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 suggested:(char)arg5 ;
-(long long)emergencyType;
@end
