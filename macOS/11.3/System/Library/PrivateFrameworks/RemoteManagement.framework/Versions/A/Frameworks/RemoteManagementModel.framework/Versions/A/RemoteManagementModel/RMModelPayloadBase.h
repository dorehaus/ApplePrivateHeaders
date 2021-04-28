/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Versions/A/Frameworks/RemoteManagementModel.framework/Versions/A/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface RMModelPayloadBase : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _unknownPayloadKeys;

}

@property (nonatomic,copy) NSSet * unknownPayloadKeys;              //@synthesize unknownPayloadKeys=_unknownPayloadKeys - In the implementation block
+(char)supportsSecureCoding;
+(id)loadData:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
+(id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)unknownPayloadKeys;
-(id)serializeWithType:(short)arg1 ;
-(void)setUnknownPayloadKeys:(NSSet *)arg1 ;
-(char)loadStringFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(char)loadIntegerFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(void)serializeStringIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 ;
-(void)serializeIntegerIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 ;
-(char)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 validator:(/*^block*/id)arg4 isRequired:(char)arg5 defaultValue:(id)arg6 error:(id*)arg7 ;
-(char)loadDictionaryFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 isRequired:(char)arg5 defaultValue:(id)arg6 serializationType:(short)arg7 error:(id*)arg8 ;
-(char)loadBooleanFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(void)serializeArrayIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 itemSerializer:(/*^block*/id)arg4 isRequired:(char)arg5 defaultValue:(id)arg6 ;
-(void)serializeDictionaryIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 dictSerializer:(/*^block*/id)arg4 isRequired:(char)arg5 defaultValue:(id)arg6 ;
-(void)serializeBooleanIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 ;
-(char)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(char)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 nested:(char)arg5 isRequired:(char)arg6 defaultValue:(id)arg7 serializationType:(short)arg8 error:(id*)arg9 ;
-(char)loadDataFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id*)arg7 ;
-(void)serializeDataIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 ;
-(void)mergeUnknownKeysFrom:(id)arg1 parentKey:(id)arg2 ;
-(char)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 usingKey:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 payloadValue:(id*)arg6 error:(id*)arg7 ;
-(id)createNestedObjectWithClass:(Class)arg1 serializationType:(short)arg2 parentKey:(id)arg3 payload:(id)arg4 error:(id*)arg5 ;
-(char)getModelObjectFromDictionary:(id)arg1 usingKey:(id)arg2 classType:(Class)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 payloadValue:(id*)arg7 error:(id*)arg8 ;
-(void)_serializeItemIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 isDefaultValue:(BOOL)arg5 ;
-(id)serializeAsDataWithType:(short)arg1 error:(id*)arg2 ;
-(char)loadFloatFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(char)loadDateFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id*)arg7 ;
-(void)serializeFloatIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 ;
-(void)serializeDateIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(char)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 ;
@end

