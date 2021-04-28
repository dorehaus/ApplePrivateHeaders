/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SADialogText, SADialogConfiguration, NSString;

@interface SADialog : SABaseAceObject <SAAceSerializable>

@property (assign,nonatomic) char canUseServerTTS; 
@property (nonatomic,retain) SADialogText * caption; 
@property (nonatomic,retain) SADialogConfiguration * configuration; 
@property (nonatomic,retain) SADialogText * content; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) char printedOnly; 
@property (assign,nonatomic) char spokenOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(void)setContent:(SADialogText *)arg1 ;
-(SADialogText *)content;
-(SADialogConfiguration *)configuration;
-(void)setConfiguration:(SADialogConfiguration *)arg1 ;
-(SADialogText *)caption;
-(void)setCaption:(SADialogText *)arg1 ;
-(id)encodedClassName;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(char)canUseServerTTS;
-(void)setCanUseServerTTS:(char)arg1 ;
-(char)printedOnly;
-(void)setPrintedOnly:(char)arg1 ;
-(char)spokenOnly;
-(void)setSpokenOnly:(char)arg1 ;
@end

