/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DRSSystemProfile : NSObject {

	unsigned char _platform;
	char _isInternal;
	char _isSeed;
	char _isCarrier;
	char _allowsCustomerAnalyticsOverride;
	char _overridingCustomerApprovesAnalyticsValue;
	NSString* _build;
	NSString* _deviceCategory;
	NSString* _deviceModel;

}

@property (assign,nonatomic) char allowsCustomerAnalyticsOverride;                       //@synthesize allowsCustomerAnalyticsOverride=_allowsCustomerAnalyticsOverride - In the implementation block
@property (assign,nonatomic) char overridingCustomerApprovesAnalyticsValue;              //@synthesize overridingCustomerApprovesAnalyticsValue=_overridingCustomerApprovesAnalyticsValue - In the implementation block
@property (nonatomic,readonly) NSString * build;                                         //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) NSString * buildVariant; 
@property (nonatomic,readonly) NSString * deviceCategory;                                //@synthesize deviceCategory=_deviceCategory - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;                                   //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) NSString * platformString; 
@property (nonatomic,readonly) unsigned char platform;                                   //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) char isInternal;                                          //@synthesize isInternal=_isInternal - In the implementation block
@property (nonatomic,readonly) char isSeed;                                              //@synthesize isSeed=_isSeed - In the implementation block
@property (nonatomic,readonly) char isCarrier;                                           //@synthesize isCarrier=_isCarrier - In the implementation block
@property (nonatomic,readonly) char customerApprovesAnalytics; 
+(id)sharedInstance;
-(id)init;
-(unsigned char)platform;
-(NSString *)build;
-(NSString *)deviceModel;
-(char)isInternal;
-(NSString *)deviceCategory;
-(char)isSeed;
-(NSString *)buildVariant;
-(char)customerApprovesAnalytics;
-(NSString *)platformString;
-(char)isCarrier;
-(void)_populateCarrier;
-(char)allowsCustomerAnalyticsOverride;
-(char)overridingCustomerApprovesAnalyticsValue;
-(void)_populateBuildVariant;
-(void)_populateBuild;
-(void)_populateDeviceModel;
-(void)_populateDeviceCategory;
-(void)_populatePlatform;
-(void)setAllowsCustomerAnalyticsOverride:(char)arg1 ;
-(void)setOverridingCustomerApprovesAnalyticsValue:(char)arg1 ;
@end

