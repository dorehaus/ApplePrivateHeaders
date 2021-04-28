/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, NSURL;

@interface NSWindowTitleController : NSObject {

	NSString* _title;
	NSString* _subtitle;
	long long _documentEditingState;
	NSError* _documentAutosavingError;
	NSError* _nonModalDocumentError;
	NSURL* _representedURL;
	char _documentEdited;
	char _showsAutosaveButton;

}

@property (copy) NSString * title; 
@property (copy) NSString * subtitle; 
@property (assign) long long documentEditingState; 
@property (retain) NSError * documentAutosavingError; 
@property (retain) NSError * nonModalDocumentError; 
@property (getter=isDocumentEdited) char documentEdited; 
@property (assign) char showsAutosaveButton; 
@property (copy) NSURL * representedURL; 
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSURL *)representedURL;
-(char)isDocumentEdited;
-(void)setDocumentEdited:(char)arg1 ;
-(void)setRepresentedURL:(NSURL *)arg1 ;
-(void)_propertiesChanged;
-(void)setDocumentEditingState:(long long)arg1 animate:(char)arg2 ;
-(void)_propertiesChanged:(char)arg1 ;
-(long long)documentEditingState;
-(void)setDocumentEditingState:(long long)arg1 ;
-(NSError *)documentAutosavingError;
-(void)setDocumentAutosavingError:(NSError *)arg1 ;
-(NSError *)nonModalDocumentError;
-(void)setNonModalDocumentError:(NSError *)arg1 ;
-(char)showsAutosaveButton;
-(void)setShowsAutosaveButton:(char)arg1 ;
@end

