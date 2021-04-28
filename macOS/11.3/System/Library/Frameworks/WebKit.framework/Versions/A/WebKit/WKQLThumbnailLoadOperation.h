/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, NSImage;

@interface WKQLThumbnailLoadOperation : NSOperation {

	RetainPtr<NSURL>* _filePath;
	RetainPtr<NSString>* _identifier;
	RetainPtr<NSFileWrapper>* _fileWrapper;
	RetainPtr<NSImage>* _thumbnail;
	char _shouldWrite;
	char _executing;
	char _finished;

}

@property (getter=isExecuting) char executing;                             //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished) char finished;                               //@synthesize finished=_finished - In the implementation block
@property (getter=isAsynchronous,readonly) char asynchronous; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSImage * thumbnail; 
-(NSString *)identifier;
-(void)start;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(NSImage *)thumbnail;
-(void)setExecuting:(char)arg1 ;
-(id)initWithAttachment:(id)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
@end

