/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/Versions/A/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDDonationPreferences.h>

@protocol CNDDonationPreferences <NSObject>
@property (assign,getter=isDonationsEnabled,nonatomic) char donationsEnabled; 
@required
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;
-(void)setDonationsEnabled:(char)arg1;
-(char)isDonationsEnabled;

@end


@protocol CNDonationPreferencesLogger;
@class NSNotificationCenter, NSString;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences> {

	NSNotificationCenter* _notificationCenter;
	id<CNDonationPreferencesLogger> _logger;
	/*^block*/id _donationPreferenceCheckingBlock;
	/*^block*/id _donationPreferenceSettingBlock;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                  //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) id<CNDonationPreferencesLogger> logger;                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy,readonly) id donationPreferenceCheckingBlock;                    //@synthesize donationPreferenceCheckingBlock=_donationPreferenceCheckingBlock - In the implementation block
@property (nonatomic,copy,readonly) id donationPreferenceSettingBlock;                     //@synthesize donationPreferenceSettingBlock=_donationPreferenceSettingBlock - In the implementation block
@property (assign,getter=isDonationsEnabled,nonatomic) char donationsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3 ;
-(NSString *)description;
-(id)init;
-(id<CNDonationPreferencesLogger>)logger;
-(NSNotificationCenter *)notificationCenter;
-(void)setDonationsEnabled:(char)arg1 ;
-(id)initWithNotificationCenter:(id)arg1 logger:(id)arg2 donationPreferenceCheckingBlock:(/*^block*/id)arg3 donationPreferenceSettingBlock:(/*^block*/id)arg4 ;
-(char)isDonationsEnabled;
-(id)donationPreferenceCheckingBlock;
-(id)donationPreferenceSettingBlock;
@end
