/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABCollectionAbstractAction.h>
#import <libobjc.A.dylib/NSSharingServiceDelegate.h>

@class ABCollectionViewItem, NSString;

@interface ABCollectionMessageAction : ABCollectionAbstractAction <NSSharingServiceDelegate> {

	ABCollectionViewItem* _target;

}

@property (nonatomic,retain) ABCollectionViewItem * target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(ABCollectionViewItem *)arg1 ;
-(ABCollectionViewItem *)target;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3 ;
-(void)sharingService:(id)arg1 didShareItems:(id)arg2 ;
-(void)executeWithTarget:(id)arg1 ;
@end
