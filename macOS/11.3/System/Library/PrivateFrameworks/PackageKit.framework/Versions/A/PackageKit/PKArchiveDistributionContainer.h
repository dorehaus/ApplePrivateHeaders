/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKMutableDistributionContainer.h>

@class PKArchive, NSDictionary;

@interface PKArchiveDistributionContainer : PKMutableDistributionContainer {

	PKArchive* _archive;
	NSDictionary* _lprojSubpathByName;
	NSDictionary* _strings;

}
-(id)stringsDictionary;
-(id)initWithArchive:(id)arg1 forWriting:(char)arg2 error:(id*)arg3 ;
-(id)_resourceDataForKey:(id)arg1 ;
-(char)setResourceData:(id)arg1 forKey:(id)arg2 forLocalization:(id)arg3 ;
-(char)setStringsData:(id)arg1 forLocalization:(id)arg2 ;
-(id)_lprojSubpathByName;
-(void)dealloc;
-(char)commitReturningError:(id*)arg1 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(char)setDistributionFromContainer:(id)arg1 ;
@end
