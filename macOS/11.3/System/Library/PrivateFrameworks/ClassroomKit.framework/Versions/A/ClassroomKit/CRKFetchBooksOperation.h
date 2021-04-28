/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation {

	/*^block*/id mBookLibraryProxy;
	NSMutableArray* mBooks;
	char mIncludeImages;

}
-(void)main;
-(char)isAsynchronous;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 includeImages:(char)arg2 ;
-(void)parseBookMetadataOperationDidFail:(id)arg1 ;
-(void)parsePDFMetadataOperationDidFail:(id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 request:(id)arg2 error:(id*)arg3 ;
@end

