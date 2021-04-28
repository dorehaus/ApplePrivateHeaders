/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainer.h>

@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer {

	MSPContainer* _itemContainer;

}

@property (nonatomic,retain) MSPContainer * itemContainer;              //@synthesize itemContainer=_itemContainer - In the implementation block
+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(id)queryWithDelegate:(id)arg1 ;
-(MSPContainer *)itemContainer;
-(void)setItemContainer:(MSPContainer *)arg1 ;
-(id)initWithPersister:(id)arg1 itemContainer:(id)arg2 ;
@end

