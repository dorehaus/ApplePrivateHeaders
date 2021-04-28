/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTResolverContainerNameProvider <NSObject>
@optional
-(char)isPendingTableNameUniquification;

@required
-(id)nameForResolverContainer:(id)arg1;
-(id)resolverContainerNameForResolver:(id)arg1;
-(id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
-(id)resolverContainerForName:(id)arg1 caseSensitive:(char)arg2;
-(id)resolversMatchingPrefix:(id)arg1;
-(id)resolverContainerNamesMatchingPrefix:(id)arg1;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;

@end

