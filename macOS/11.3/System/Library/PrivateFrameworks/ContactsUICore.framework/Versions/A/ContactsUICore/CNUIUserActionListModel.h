/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIUserActionItem, NSArray;

@interface CNUIUserActionListModel : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSArray* _actions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * directoryServiceActions;                 //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,copy) NSArray * foundOnDeviceActions;                    //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
@property (nonatomic,readonly) char isEmpty; 
+(id)emptyModel;
-(id)description;
-(char)isEmpty;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(CNUIUserActionItem *)defaultAction;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
-(id)initWithModel:(id)arg1 actions:(id)arg2 ;
-(id)allActions;
@end

