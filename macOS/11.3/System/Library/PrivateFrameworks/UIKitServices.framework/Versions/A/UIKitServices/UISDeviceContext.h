/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _deviceInfoKeysToValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
+(char)supportsBSXPCSecureCoding;
+(id)_allKeys;
+(id)_keysToValueTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(long long)deviceInfoIntegerValueForKey:(id)arg1 ;
-(double)deviceInfoFloatValueForKey:(id)arg1 ;
-(id)initWithDeviceInfoValues:(id)arg1 ;
-(id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1 ;
-(char)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2 ;
-(id)_rawDeviceInfoKeysToValues;
-(long long)_valueTypeForKey:(id)arg1 ;
-(long long)_valueTypeForValue:(id)arg1 ;
-(char)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2 ;
-(char)hasDeviceInfoValueForKey:(id)arg1 ;
-(char)deviceInfoBoolValueForKey:(id)arg1 ;
-(id)deviceInfoStringValueForKey:(id)arg1 ;
@end

