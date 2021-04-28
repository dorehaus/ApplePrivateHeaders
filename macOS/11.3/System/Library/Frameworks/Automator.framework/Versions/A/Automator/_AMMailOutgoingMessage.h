/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSString, _AMMailRichText;

@interface _AMMailOutgoingMessage : SBObject

@property (copy) NSString * sender; 
@property (copy) NSString * subject; 
@property (copy) _AMMailRichText * content; 
@property (assign) char visible; 
@property (copy) id messageSignature; 
@property (copy) NSString * htmlContent; 
@property (copy) NSString * vcardPath; 
-(void)setContent:(_AMMailRichText *)arg1 ;
-(_AMMailRichText *)content;
-(void)setVisible:(char)arg1 ;
-(char)visible;
-(char)send;
-(NSString *)sender;
-(id)recipients;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setSender:(NSString *)arg1 ;
-(void)delete;
-(void)setHtmlContent:(NSString *)arg1 ;
-(NSString *)htmlContent;
-(long long)id;
-(id)toRecipients;
-(id)ccRecipients;
-(id)bccRecipients;
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveIn:(id)arg1 as:(int)arg2 ;
-(void)printWithProperties:(id)arg1 printDialog:(char)arg2 ;
-(id)messageSignature;
-(void)setMessageSignature:(id)arg1 ;
-(NSString *)vcardPath;
-(void)setVcardPath:(NSString *)arg1 ;
@end
