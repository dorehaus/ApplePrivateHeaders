/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL, ISAuthenticationContext, ISStoreClient, NSWindow;

@interface ISSignInPromptSettings : NSObject <NSSecureCoding> {

	NSString* titleString;
	NSString* messageString;
	NSString* defaultButtonString;
	NSString* alternateButtonString;
	NSString* otherButtonString;
	NSString* suppressionCheckboxString;
	NSNumber* suppressionCheckboxState;
	NSURL* authenticateAccountURL;
	ISAuthenticationContext* context;
	ISStoreClient* storeClient;
	char needsDedicatedUI;
	char shouldUseAppStoreUI;
	char forceActivate;
	NSWindow* _sheetWindow;

}

@property (retain) NSString * titleString; 
@property (retain) NSString * messageString; 
@property (retain) NSString * defaultButtonString; 
@property (retain) NSString * alternateButtonString; 
@property (retain) NSString * otherButtonString; 
@property (retain) NSString * suppressionCheckboxString; 
@property (retain) NSNumber * suppressionCheckboxState; 
@property (retain) NSURL * authenticateAccountURL; 
@property (retain) NSWindow * sheetWindow;                            //@synthesize sheetWindow=_sheetWindow - In the implementation block
@property (retain) ISAuthenticationContext * context; 
@property (retain) ISStoreClient * storeClient; 
@property (assign) char needsDedicatedUI; 
@property (assign) char shouldUseAppStoreUI; 
@property (assign) char forceActivate; 
+(char)supportsSecureCoding;
+(id)settingsWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 suppressionCheckbox:(id)arg6 suppressionCheckboxState:(id)arg7 authenticateAccountURL:(id)arg8 authenticationContext:(id)arg9 needsDedicatedUI:(char)arg10 storeClient:(id)arg11 ;
+(id)settingsWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 suppressionCheckbox:(id)arg6 suppressionCheckboxState:(id)arg7 authenticateAccountURL:(id)arg8 authenticationContext:(id)arg9 storeClient:(id)arg10 ;
+(id)settingsWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 suppressionCheckbox:(id)arg6 suppressionCheckboxState:(id)arg7 authenticateAccountURL:(id)arg8 authenticationContext:(id)arg9 shouldUseAppStoreUI:(char)arg10 storeClient:(id)arg11 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ISAuthenticationContext *)context;
-(void)setContext:(ISAuthenticationContext *)arg1 ;
-(NSWindow *)sheetWindow;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)messageString;
-(void)setMessageString:(NSString *)arg1 ;
-(NSString *)defaultButtonString;
-(void)setDefaultButtonString:(NSString *)arg1 ;
-(ISStoreClient *)storeClient;
-(void)setStoreClient:(ISStoreClient *)arg1 ;
-(NSURL *)authenticateAccountURL;
-(NSNumber *)suppressionCheckboxState;
-(void)setSuppressionCheckboxState:(NSNumber *)arg1 ;
-(void)setAuthenticateAccountURL:(NSURL *)arg1 ;
-(char)forceActivate;
-(void)setForceActivate:(char)arg1 ;
-(void)setSheetWindow:(NSWindow *)arg1 ;
-(id)_shortDescriptionForString:(id)arg1 ;
-(void)setAlternateButtonString:(NSString *)arg1 ;
-(void)setOtherButtonString:(NSString *)arg1 ;
-(void)setSuppressionCheckboxString:(NSString *)arg1 ;
-(void)setNeedsDedicatedUI:(char)arg1 ;
-(void)setShouldUseAppStoreUI:(char)arg1 ;
-(NSString *)alternateButtonString;
-(NSString *)otherButtonString;
-(NSString *)suppressionCheckboxString;
-(char)needsDedicatedUI;
-(char)shouldUseAppStoreUI;
@end

