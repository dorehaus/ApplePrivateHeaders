/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSURL, NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSURL * audioMessageURL; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,retain) SAUIDecoratedText * content; 
@property (nonatomic,retain) SAUIDecoratedText * recipient; 
@property (nonatomic,copy) NSString * serviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)content;
-(NSString *)serviceType;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(NSURL *)audioMessageURL;
-(void)setAudioMessageURL:(NSURL *)arg1 ;
-(SAUIDecoratedText *)recipient;
@end

