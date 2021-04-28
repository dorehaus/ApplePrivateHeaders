/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QFilterViewControllerDelegate
@required
-(id)filterViewController:(id)arg1 addFilterToRegistry:(id)arg2 withProperties:(id)arg3;
-(void)filterViewController:(id)arg1 removeFilter:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)filterViewController:(id)arg1 didAddFilter:(id)arg2;
-(void)filterViewController:(id)arg1 didRemoveFilter:(id)arg2;
-(void)filterViewController:(id)arg1 didModifyFilter:(id)arg2;
-(void)filterViewController:(id)arg1 didSelectFilter:(id)arg2;

@end

