/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation {

	CKRecordID* _recordID;
	char _withServerLookup;
	/*^block*/id _copyDocumentURLCompletionBlock;

}

@property (copy) id copyDocumentURLCompletionBlock;              //@synthesize copyDocumentURLCompletionBlock=_copyDocumentURLCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)copyDocumentURLCompletionBlock;
-(void)setCopyDocumentURLCompletionBlock:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 withServerLookup:(char)arg2 ;
@end

