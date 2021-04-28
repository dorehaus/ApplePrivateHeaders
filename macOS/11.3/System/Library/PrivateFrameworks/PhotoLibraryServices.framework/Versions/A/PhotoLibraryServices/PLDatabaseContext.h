/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryBundle, PLLazyObject;

@interface PLDatabaseContext : NSObject {

	PLPhotoLibraryBundle* _libraryBundle;
	PLLazyObject* _lazyHighPriorityTransientLibrary;
	PLLazyObject* _lazyLowPriorityTransientLibrary;
	PLLazyObject* _lazyCplLibrary;
	PLLazyObject* _lazyMomentLibrary;
	PLLazyObject* _lazyNonTransientLibrary;

}
-(void)dealloc;
-(void)invalidate;
-(void)perform:(/*^block*/id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(id)transientLibraryWithCurrentQoS;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)newHighPriorityTransientLibrary;
-(id)highPriorityTransientLibrary;
-(id)newLowPriorityTransientLibrary;
-(id)lowPriorityTransientLibrary;
-(void)performTransactionSync:(/*^block*/id)arg1 ;
-(id)newCplLibrary;
-(id)cplLibrary;
-(id)newMomentLibrary;
-(id)momentLibrary;
-(id)newNonTransientLibrary;
-(id)nonTransientLibrary;
@end

