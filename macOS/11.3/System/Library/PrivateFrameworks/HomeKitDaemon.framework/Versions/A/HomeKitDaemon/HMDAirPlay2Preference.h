/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMFSystemPreference, NSString, NSArray;

@interface HMDAirPlay2Preference : HMFPreference <HMFObject> {

	HMFSystemPreference* _airPlayPreference;
	HMFSystemPreference* _homeKitPreference;

}

@property (readonly) HMFSystemPreference * airPlayPreference;                     //@synthesize airPlayPreference=_airPlayPreference - In the implementation block
@property (readonly) HMFSystemPreference * homeKitPreference;                     //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(char)boolValue;
-(id)stringValue;
-(id)numberValue;
-(NSString *)propertyDescription;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(HMFSystemPreference *)homeKitPreference;
-(HMFSystemPreference *)airPlayPreference;
@end

