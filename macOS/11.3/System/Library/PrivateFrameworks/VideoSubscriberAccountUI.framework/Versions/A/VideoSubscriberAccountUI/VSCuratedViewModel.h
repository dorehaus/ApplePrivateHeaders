/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/Versions/A/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>
#import <libobjc.A.dylib/VSLogoImageViewModel.h>

@class NSItemProvider, UIImage, NSString, VSOptional;

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel> {

	char _beginValidationButtonEnabled;
	char _showFooter;
	NSItemProvider* _logoProvider;
	UIImage* _logo;
	NSString* _logoAccessibilityLabel;
	NSString* _beginValidationButtonTitle;
	VSOptional* _identityProviderDisplayName;
	NSString* _message;
	NSString* _notice;
	NSString* _footerText;

}

@property (assign,getter=isBeginValidationButtonEnabled,nonatomic) char beginValidationButtonEnabled;              //@synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled - In the implementation block
@property (nonatomic,copy) NSString * beginValidationButtonTitle;                                                  //@synthesize beginValidationButtonTitle=_beginValidationButtonTitle - In the implementation block
@property (nonatomic,retain) VSOptional * identityProviderDisplayName;                                             //@synthesize identityProviderDisplayName=_identityProviderDisplayName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * notice;                                                                      //@synthesize notice=_notice - In the implementation block
@property (assign,nonatomic) char showFooter;                                                                      //@synthesize showFooter=_showFooter - In the implementation block
@property (nonatomic,copy) NSString * footerText;                                                                  //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,retain) NSItemProvider * logoProvider;                                                        //@synthesize logoProvider=_logoProvider - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                                       //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * logoAccessibilityLabel;                                                      //@synthesize logoAccessibilityLabel=_logoAccessibilityLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(NSString *)notice;
-(void)setNotice:(NSString *)arg1 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
-(VSOptional *)identityProviderDisplayName;
-(void)configureWithRequest:(id)arg1 ;
-(NSItemProvider *)logoProvider;
-(void)setLogoProvider:(NSItemProvider *)arg1 ;
-(NSString *)logoAccessibilityLabel;
-(void)setLogoAccessibilityLabel:(NSString *)arg1 ;
-(void)setBeginValidationButtonTitle:(NSString *)arg1 ;
-(void)setBeginValidationButtonEnabled:(char)arg1 ;
-(void)setIdentityProviderDisplayName:(VSOptional *)arg1 ;
-(void)setShowFooter:(char)arg1 ;
-(char)isBeginValidationButtonEnabled;
-(NSString *)beginValidationButtonTitle;
-(char)showFooter;
@end

