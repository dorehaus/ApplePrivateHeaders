/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Versions/A/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <OnBoardingKit/OBTemplateView.h>
#import <libobjc.A.dylib/SecureIntentClientView.h>

@class BKMesaSecureIntentProvider, BKUIDeviceImageView, NSString;

@interface BuddySecureIntentClientView : OBTemplateView <SecureIntentClientView> {

	BKMesaSecureIntentProvider* _secureIntentProvider;
	BKUIDeviceImageView* _deviceImageView;

}

@property (nonatomic,retain) BKUIDeviceImageView * deviceImageView;                                 //@synthesize deviceImageView=_deviceImageView - In the implementation block
@property (assign,nonatomic,__weak) BKMesaSecureIntentProvider * secureIntentProvider;              //@synthesize secureIntentProvider=_secureIntentProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)drawRect:(CGRect)arg1 ;
-(BKMesaSecureIntentProvider *)secureIntentProvider;
-(void)setSecureIntentProvider:(BKMesaSecureIntentProvider *)arg1 ;
-(void)showRetryOnErrorUI;
-(void)showInitialUI;
-(BKUIDeviceImageView *)deviceImageView;
-(void)setDeviceImageView:(BKUIDeviceImageView *)arg1 ;
@end

