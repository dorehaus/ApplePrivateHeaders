/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3DatabaseValidationDelegate;
@class ML3MusicLibrary;

@interface ML3DatabaseValidation : NSObject {

	char _truncateBeforeValidating;
	ML3MusicLibrary* _library;
	id<ML3DatabaseValidationDelegate> _delegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                                    //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) id<ML3DatabaseValidationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) char truncateBeforeValidating;                                  //@synthesize truncateBeforeValidating=_truncateBeforeValidating - In the implementation block
-(id<ML3DatabaseValidationDelegate>)delegate;
-(void)setDelegate:(id<ML3DatabaseValidationDelegate>)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(ML3MusicLibrary *)library;
-(char)truncateBeforeValidating;
-(char)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2 ;
-(char)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(char)_internalUserAgreesToRebuildUnmigratableDatabase;
-(char)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(char)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runValidation;
-(void)setTruncateBeforeValidating:(char)arg1 ;
@end

