/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@class PKPassLibrary, NSString;

@interface PKRemoteDataAccessor : PKDataAccessor {

	PKPassLibrary* _library;
	NSString* _objectUniqueID;

}

@property (nonatomic,readonly) PKPassLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSString * objectUniqueID;              //@synthesize objectUniqueID=_objectUniqueID - In the implementation block
-(id)content;
-(id)archiveData;
-(PKPassLibrary *)library;
-(void)updateSettings:(unsigned long long)arg1 ;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(char)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)displayProfileOfType:(long long)arg1 ;
-(id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2 ;
-(NSString *)objectUniqueID;
-(void)noteShared;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)cachedImageSetForType:(long long)arg1 withDisplayProfile:(id)arg2 displayTraits:(id)arg3 ;
@end

