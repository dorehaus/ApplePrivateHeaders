/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol PKPackageSource
@property (readonly) NSArray * allPackageReferences; 
@optional
-(id)packageReferencesMatchingIdentifier:(id)arg1 version:(id)arg2;

@required
-(NSArray *)allPackageReferences;

@end

