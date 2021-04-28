/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSImage, NSString, NSArray;

@interface NSCloudSharingPanel : NSObject {

	NSURL* _ubiquitousDocumentURL;
	id _delegate;
	NSImage* _thumbnailImage;
	NSString* _helpAnchor;
	NSString* _messageTemplate1;
	NSString* _messageTemplate2;
	NSString* _message3;
	NSString* _message4;
	NSString* _shareButtonLabel;
	char _documentHasPassword;
	NSArray* _servicesToCustomize;

}

@property (assign) id<NSCloudSharingPanelDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSString * helpAnchor;                                           //@synthesize helpAnchor=_helpAnchor - In the implementation block
@property (copy) NSString * primaryMessageTemplate;                               //@synthesize messageTemplate1=_messageTemplate1 - In the implementation block
@property (copy) NSString * primaryMessageTemplateForSharedDocument;              //@synthesize messageTemplate2=_messageTemplate2 - In the implementation block
@property (copy) NSString * secondaryMessage;                                     //@synthesize message3=_message3 - In the implementation block
@property (copy) NSString * secondaryMessageForSharedDocument;                    //@synthesize message4=_message4 - In the implementation block
@property (copy) NSString * shareButtonLabel;                                     //@synthesize shareButtonLabel=_shareButtonLabel - In the implementation block
@property (assign) char documentHasPassword;                                      //@synthesize documentHasPassword=_documentHasPassword - In the implementation block
@property (copy) NSArray * servicesToCustomize;                                   //@synthesize servicesToCustomize=_servicesToCustomize - In the implementation block
@property (copy) NSURL * ubiquitousDocumentURL;                                   //@synthesize ubiquitousDocumentURL=_ubiquitousDocumentURL - In the implementation block
@property (retain) NSImage * thumbnailImage;                                      //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
+(id)panel;
-(void)dealloc;
-(id<NSCloudSharingPanelDelegate>)delegate;
-(void)setDelegate:(id<NSCloudSharingPanelDelegate>)arg1 ;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)helpAnchor;
-(void)setHelpAnchor:(NSString *)arg1 ;
-(void)setUbiquitousDocumentURL:(NSURL *)arg1 ;
-(NSURL *)ubiquitousDocumentURL;
-(NSImage *)thumbnailImage;
-(void)setThumbnailImage:(NSImage *)arg1 ;
-(NSString *)primaryMessageTemplate;
-(void)setPrimaryMessageTemplate:(NSString *)arg1 ;
-(NSString *)primaryMessageTemplateForSharedDocument;
-(void)setPrimaryMessageTemplateForSharedDocument:(NSString *)arg1 ;
-(NSString *)secondaryMessage;
-(void)setSecondaryMessage:(NSString *)arg1 ;
-(NSString *)secondaryMessageForSharedDocument;
-(void)setSecondaryMessageForSharedDocument:(NSString *)arg1 ;
-(NSString *)shareButtonLabel;
-(void)setShareButtonLabel:(NSString *)arg1 ;
-(char)documentHasPassword;
-(void)setDocumentHasPassword:(char)arg1 ;
-(NSArray *)servicesToCustomize;
-(void)setServicesToCustomize:(NSArray *)arg1 ;
@end

