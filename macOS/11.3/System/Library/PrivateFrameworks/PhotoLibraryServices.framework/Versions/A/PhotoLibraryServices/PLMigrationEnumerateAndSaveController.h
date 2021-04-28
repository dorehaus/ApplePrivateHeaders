/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PLModelMigrator, NSManagedObjectContext, PLPhotoLibraryBundle, NSFetchRequest, NSOperationQueue, NSError;

@interface PLMigrationEnumerateAndSaveController : NSObject {

	char _succeeded;
	NSString* _operationName;
	PLModelMigrator* _migrator;
	NSManagedObjectContext* _originalContext;
	PLPhotoLibraryBundle* _migrationBundle;
	NSFetchRequest* _originalFetchRequest;
	NSOperationQueue* _operationQueue;
	/*^block*/id _processResultsBlock;
	NSError* _firstError;

}

@property (nonatomic,retain) NSString * operationName;                              //@synthesize operationName=_operationName - In the implementation block
@property (nonatomic,retain) PLModelMigrator * migrator;                            //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * originalContext;              //@synthesize originalContext=_originalContext - In the implementation block
@property (nonatomic,retain) PLPhotoLibraryBundle * migrationBundle;                //@synthesize migrationBundle=_migrationBundle - In the implementation block
@property (nonatomic,retain) NSFetchRequest * originalFetchRequest;                 //@synthesize originalFetchRequest=_originalFetchRequest - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) id processResultsBlock;                                  //@synthesize processResultsBlock=_processResultsBlock - In the implementation block
@property (assign,nonatomic) char succeeded;                                        //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) NSError * firstError;                                  //@synthesize firstError=_firstError - In the implementation block
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(char)succeeded;
-(void)setMigrator:(PLModelMigrator *)arg1 ;
-(PLModelMigrator *)migrator;
-(NSString *)operationName;
-(void)setSucceeded:(char)arg1 ;
-(char)processObjectsWithError:(id*)arg1 ;
-(id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 modelMigrator:(id)arg4 concurrent:(char)arg5 processResultBlock:(/*^block*/id)arg6 ;
-(NSManagedObjectContext *)originalContext;
-(PLPhotoLibraryBundle *)migrationBundle;
-(NSFetchRequest *)originalFetchRequest;
-(id)processResultsBlock;
-(NSError *)firstError;
-(void)_runOperationWithObjectIDs:(id)arg1 ;
-(void)setOperationName:(NSString *)arg1 ;
-(void)setOriginalContext:(NSManagedObjectContext *)arg1 ;
-(void)setMigrationBundle:(PLPhotoLibraryBundle *)arg1 ;
-(void)setOriginalFetchRequest:(NSFetchRequest *)arg1 ;
-(void)setProcessResultsBlock:(id)arg1 ;
-(void)setFirstError:(NSError *)arg1 ;
@end
