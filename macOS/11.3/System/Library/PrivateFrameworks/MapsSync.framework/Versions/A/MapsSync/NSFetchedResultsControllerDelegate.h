/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFetchedResultsControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 didChangeContentWithSnapshot:(id)arg2;
-(void)controller:(id)arg1 didChangeContentWithDifference:(id)arg2;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
-(void)controllerWillChangeContent:(id)arg1;
-(void)controllerDidChangeContent:(id)arg1;
-(id)controller:(id)arg1 sectionIndexTitleForSectionName:(id)arg2;

@end

