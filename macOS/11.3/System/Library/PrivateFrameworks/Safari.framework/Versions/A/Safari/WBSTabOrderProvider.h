/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSTabOrderProvider <NSObject>
@property (nonatomic,readonly) unsigned long long indexOfSelectedTab; 
@property (nonatomic,readonly) id<WBSOrderedTab> selectedTabForTabOrderProvider; 
@property (nonatomic,readonly) unsigned long long numberOfTabs; 
@required
-(unsigned long long)numberOfTabs;
-(unsigned long long)indexOfSelectedTab;
-(id<WBSOrderedTab>)selectedTabForTabOrderProvider;
-(unsigned long long)indexForTab:(id)arg1;
-(id)tabAtIndex:(unsigned long long)arg1;
-(id)originatingTabForTab:(id)arg1;

@end

