/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSPasteboardReading.h>

@class NSPasteboard, NSPasteboardItem, NSArray, NSOperationQueue, NSString;

@interface NSFilePromiseReceiver : NSObject <NSPasteboardReading> {

	NSPasteboard* _pasteboard;
	NSPasteboardItem* _pasteboardItem;
	NSArray* _fileTypes;
	NSArray* _reservedA;
	NSArray* _fileNames;
	NSArray* _fileURLs;
	NSOperationQueue* _operationQueue;
	long long _promiseType;
	/*^block*/id _readerBlock;
	struct {
		unsigned usesFileCoordination : 1;
		unsigned registered : 1;
		unsigned reserved : 30;
	}  _flags;

}

@property (copy,readonly) NSArray * alternateFileTypes;              //@synthesize reservedA=_reservedA - In the implementation block
@property (copy,readonly) NSArray * fileTypes;                       //@synthesize fileTypes=_fileTypes - In the implementation block
@property (copy,readonly) NSArray * fileNames;                       //@synthesize fileNames=_fileNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readableTypesForPasteboard:(id)arg1 ;
+(unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
+(id)readableDraggedTypes;
+(id)acceptableDragTypes;
-(void)dealloc;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(void)draggingEnded:(id)arg1 ;
-(void)draggingCancelled:(id)arg1 ;
-(NSArray *)fileTypes;
-(void)receivePromisedFilesAtDestination:(id)arg1 options:(id)arg2 operationQueue:(id)arg3 reader:(/*^block*/id)arg4 ;
-(void)_setPasteboard:(id)arg1 ;
-(void)_setPasteboardItem:(id)arg1 ;
-(NSArray *)alternateFileTypes;
-(void)registerDestinationLocation:(id)arg1 options:(id)arg2 operationQueue:(id)arg3 reader:(/*^block*/id)arg4 ;
-(char)providerIsUsingFileCoordination;
-(void)registerDesinationLocation:(id)arg1 options:(id)arg2 operationQueu:(id)arg3 reader:(/*^block*/id)arg4 ;
-(NSArray *)fileNames;
@end

