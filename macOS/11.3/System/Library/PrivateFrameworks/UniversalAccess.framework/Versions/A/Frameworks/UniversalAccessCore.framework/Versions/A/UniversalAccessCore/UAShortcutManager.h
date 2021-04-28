/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UniversalAccess.framework/Versions/A/Frameworks/UniversalAccessCore.framework/Versions/A/UniversalAccessCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSSet, NSArray;

@interface UAShortcutManager : NSObject {

	char __registeredForNotifications;
	char __needToRepopulate;
	/*^block*/id __handler;
	NSMutableArray* __mutableCategories;
	NSMutableSet* __vendedCategories;
	NSSet* __vendedFeatures;

}

@property (nonatomic,copy) id _handler;                                        //@synthesize _handler=__handler - In the implementation block
@property (nonatomic,retain) NSMutableArray * _mutableCategories;              //@synthesize _mutableCategories=__mutableCategories - In the implementation block
@property (assign,nonatomic) char _registeredForNotifications;                 //@synthesize _registeredForNotifications=__registeredForNotifications - In the implementation block
@property (assign,nonatomic) char _needToRepopulate;                           //@synthesize _needToRepopulate=__needToRepopulate - In the implementation block
@property (nonatomic,retain) NSMutableSet * _vendedCategories;                 //@synthesize _vendedCategories=__vendedCategories - In the implementation block
@property (copy) NSSet * _vendedFeatures;                                      //@synthesize _vendedFeatures=__vendedFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories; 
@property (nonatomic,readonly) char shouldShowSystemPrefLinks; 
-(void)dealloc;
-(id)init;
-(id)_handler;
-(char)_registeredForNotifications;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(NSArray *)categories;
-(void)setChangedHandler:(/*^block*/id)arg1 ;
-(NSMutableSet *)_vendedCategories;
-(NSSet *)_vendedFeatures;
-(void)_populateCategoriesIfNeeded;
-(NSMutableArray *)_mutableCategories;
-(id)_debugStringForCategories:(id)arg1 ;
-(char)_needToRepopulate;
-(void)_populateCategories;
-(void)set_needToRepopulate:(char)arg1 ;
-(id)_vendedFeatureForFeatureName:(id)arg1 ;
-(void)set_vendedFeatures:(NSSet *)arg1 ;
-(id)_getOrCreateCategoryID:(unsigned long long)arg1 ;
-(id)_vendedCategoryForCategoryID:(unsigned long long)arg1 ;
-(void)set_registeredForNotifications:(char)arg1 ;
-(id)_notificationsOfInterest;
-(void)_settingsChanged:(id)arg1 ;
-(void)set_handler:(id)arg1 ;
-(char)shouldShowSystemPrefLinks;
-(void)set_mutableCategories:(NSMutableArray *)arg1 ;
-(void)set_vendedCategories:(NSMutableSet *)arg1 ;
@end

