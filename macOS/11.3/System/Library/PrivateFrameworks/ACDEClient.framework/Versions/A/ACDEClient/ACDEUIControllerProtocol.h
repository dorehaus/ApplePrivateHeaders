/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSImage, NSString;


@protocol ACDEUIControllerProtocol <ACMUIControllerProtocol>
@property (assign,nonatomic) id<ACDEUIControllerDelegate> delegate; 
@property (nonatomic,retain) id<ACDEAuthenticationRequest> request; 
@property (nonatomic,retain) NSImage * logoImage; 
@property (nonatomic,retain) NSString * signInDialogTitle; 
@property (nonatomic,retain) NSString * signInDialogDescription; 
@property (nonatomic,readonly) char isWidgetShown; 
@property (assign,nonatomic) NSString * password; 
@required
-(id<ACDEUIControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)password;
-(id<ACDEAuthenticationRequest>)request;
-(void)setPassword:(id)arg1;
-(void)setRequest:(id)arg1;
-(NSImage *)logoImage;
-(void)setLogoImage:(id)arg1;
-(NSString *)signInDialogTitle;
-(void)setSignInDialogTitle:(id)arg1;
-(NSString *)signInDialogDescription;
-(void)setSignInDialogDescription:(id)arg1;
-(char)isWidgetShown;
-(void)showSignInWidgetWithParentWindow:(id)arg1 completion:(/*^block*/id)arg2;
-(void)hideSignInWidgetWithCompletion:(/*^block*/id)arg1;
-(void)showAlertMessage:(id)arg1 errorTag:(long long)arg2;

@end
