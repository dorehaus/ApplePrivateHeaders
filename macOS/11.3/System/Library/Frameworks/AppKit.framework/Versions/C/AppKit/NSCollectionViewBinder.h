/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSBinder.h>

@interface NSCollectionViewBinder : NSBinder {

	SCD_Struct_NS36 _collectionViewBinderFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)objectMechanismsRequiredForObject:(id)arg1 ;
+(id)bindingsForObject:(id)arg1 ;
+(id)bindingCategory;
-(void)_init;
-(char)isBindingReadOnly:(id)arg1 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void*)arg3 ;
-(unsigned long long)_bindingAdaptorMethodsNeededMask;
-(void)_connectionWasBroken;
-(void)_updateSelectionIndexes:(id)arg1 ;
-(void)_updateContent;
-(void)collectionView:(id)arg1 didChangeToSelectionIndexes:(id)arg2 ;
@end

