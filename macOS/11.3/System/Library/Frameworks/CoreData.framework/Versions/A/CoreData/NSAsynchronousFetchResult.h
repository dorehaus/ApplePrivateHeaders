/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreAsynchronousResult.h>

@class NSAsynchronousFetchRequest, NSArray;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {

	NSAsynchronousFetchRequest* _fetchRequest;
	NSArray* _finalResult;
	id _intermediateResultCallback;

}

@property (retain) NSArray * finalResult;                                    //@synthesize finalResult=_finalResult - In the implementation block
@property (copy) id intermediateResultCallback;                              //@synthesize intermediateResultCallback=_intermediateResultCallback - In the implementation block
@property (readonly) NSAsynchronousFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(/*^block*/id)arg4 ;
-(void)setFinalResult:(NSArray *)arg1 ;
-(NSArray *)finalResult;
-(id)intermediateResultCallback;
-(void)setIntermediateResultCallback:(id)arg1 ;
-(void)dealloc;
-(NSAsynchronousFetchRequest *)fetchRequest;
-(void)setOperationError:(id)arg1 ;
@end
