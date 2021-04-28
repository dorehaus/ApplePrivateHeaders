/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface StartPageCollectionViewControllerItemRegister : NSObject {

	NSMutableDictionary* _collectionViewItemDefinitions;
	NSMutableDictionary* _supplementaryViewDefinitions;

}
-(id)init;
-(void)registerClass:(Class)arg1 forItemWithIdentifier:(id)arg2 ;
-(void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withIdentifier:(id)arg3 ;
-(void)registerNibName:(id)arg1 inBundle:(id)arg2 forSupplementaryViewOfKind:(id)arg3 withIdentifier:(id)arg4 ;
-(void)registerNibName:(id)arg1 inBundle:(id)arg2 forItemWithIdentifier:(id)arg3 ;
-(void)setUpReusableItemsInCollectionView:(id)arg1 ;
-(void)_setDefinition:(id)arg1 forIdentifier:(id)arg2 inDictionary:(id)arg3 ;
@end
