/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSFileProvider.h>
#import <libobjc.A.dylib/_NSPasteboardPromiseProviderAgency.h>
#import <libobjc.A.dylib/NSPasteboardWriting.h>

@protocol NSFilePromiseProviderDelegate;
@class NSURL, NSOperationQueue, NSString, NSArray, _NSFilePromiseProviderPrivate;

@interface NSFilePromiseProvider : NSObject <NSFileProvider, _NSPasteboardPromiseProviderAgency, NSPasteboardWriting> {

	NSString* _fileType;
	NSArray* _reservedA;
	id _reservedB;
	id<NSFilePromiseProviderDelegate> _delegate;
	id<NSFilePromiseProviderDelegate> _strongDelegate;
	id _userInfo;
	NSURL* _destinationURL;
	long long _dragggingSequenceNumber;
	struct {
		unsigned valid;
		unsigned providedItem : 1;
		unsigned reserved : 30;
	}  _flags;
	id _private;

}

@property (nonatomic,readonly) _NSFilePromiseProviderPrivate * private;              //@synthesize private=_private - In the implementation block
@property (copy) NSArray * alternateFileTypes;                                       //@synthesize reservedA=_reservedA - In the implementation block
@property (assign) long long dragggingSequenceNumber;                                //@synthesize dragggingSequenceNumber=_dragggingSequenceNumber - In the implementation block
@property (copy) NSString * fileType; 
@property (__weak) id<NSFilePromiseProviderDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (retain) id userInfo;                                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_provideItemNotifyQueue;
-(void)dealloc;
-(id)init;
-(id)userInfo;
-(id<NSFilePromiseProviderDelegate>)delegate;
-(void)setDelegate:(id<NSFilePromiseProviderDelegate>)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSString *)fileType;
-(id)_destinationURL;
-(NSString *)_fileReactorID;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)draggingEnded:(id)arg1 ;
-(char)setString:(id)arg1 forType:(id)arg2 ;
-(char)setData:(id)arg1 forType:(id)arg2 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(void)setFileType:(NSString *)arg1 ;
-(char)setPropertyList:(id)arg1 forType:(id)arg2 ;
-(void)setDragggingSequenceNumber:(long long)arg1 ;
-(void)draggingCancelled:(id)arg1 ;
-(id)_dataProviderForType:(id)arg1 ;
-(void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3 ;
-(void)pasteboardFinishedWithDataProvider:(id)arg1 ;
-(char)setDataProvider:(id)arg1 forTypes:(id)arg2 ;
-(NSArray *)alternateFileTypes;
-(id)_fileNameForType:(id)arg1 ;
-(void)_strongifyDelegate;
-(_NSFilePromiseProviderPrivate *)private;
-(void)_coordinatelyWritePromiseToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFileType:(id)arg1 delegate:(id)arg2 ;
-(void)_cancel;
-(void)_setDestinationURL:(id)arg1 ;
-(void)setAlternateFileTypes:(NSArray *)arg1 ;
-(long long)dragggingSequenceNumber;
@end

