/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputMenuUI.framework/Versions/A/TextInputMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputMenuUI/TextInputMenuUI-Structs.h>
#import <libobjc.A.dylib/InputSourceOwnerProtocol.h>

@class NSNumber, NSBundle, NSString;

@interface InputSourceOwner : NSObject <InputSourceOwnerProtocol> {

	ProcessSerialNumber _targetApp;
	NSNumber* _targetTSMDocument;

}

@property (nonatomic,readonly) ProcessSerialNumber* targetApp; 
@property (nonatomic,readonly) NSNumber * targetTSMDocument;                //@synthesize targetTSMDocument=_targetTSMDocument - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle; 
@property (nonatomic,readonly) char isSecureMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTargetApp:(ProcessSerialNumber*)arg1 targetTSMDocument:(id)arg2 ;
-(void)setListenToEnabledInputSourcesChanged;
-(void)dealloc;
-(NSBundle *)bundle;
-(ProcessSerialNumber*)targetApp;
-(void)handleEnabledInputSourcesChange;
-(void)sourceWasChangedTo:(id)arg1 ;
-(void)setNotificationOverride;
-(NSNumber *)targetTSMDocument;
-(char)isSecureMode;
@end

