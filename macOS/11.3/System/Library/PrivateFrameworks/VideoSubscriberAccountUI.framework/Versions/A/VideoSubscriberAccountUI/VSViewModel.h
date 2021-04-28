/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/Versions/A/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString, VSIdentityProvider;

@interface VSViewModel : NSObject {

	char _preValidate;
	unsigned long long _viewState;
	unsigned long long _validationState;
	NSError* _error;
	NSString* _title;
	VSIdentityProvider* _identityProvider;

}

@property (assign,nonatomic) unsigned long long viewState;                           //@synthesize viewState=_viewState - In the implementation block
@property (assign,getter=shouldPreValidate,nonatomic) char preValidate;              //@synthesize preValidate=_preValidate - In the implementation block
@property (assign,nonatomic) unsigned long long validationState;                     //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                  //@synthesize identityProvider=_identityProvider - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)viewState;
-(void)setViewState:(unsigned long long)arg1 ;
-(unsigned long long)validationState;
-(void)setValidationState:(unsigned long long)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(char)shouldPreValidate;
-(void)setPreValidate:(char)arg1 ;
@end

