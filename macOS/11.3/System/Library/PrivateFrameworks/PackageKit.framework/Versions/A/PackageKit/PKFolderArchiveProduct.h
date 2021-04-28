/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKProduct.h>

@class PKArchive, PKDistribution;

@interface PKFolderArchiveProduct : PKProduct {

	PKArchive* _archive;
	PKDistribution* _distribution;

}
+(char)canInitWithURL:(id)arg1 ;
-(id)stringsDictionary;
-(id)_initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_distributionDataFromArchive:(id)arg1 returningDistributionURL:(id*)arg2 error:(id*)arg3 ;
-(id)_synthesizedDistributionFromMetaPackageInArchive:(id)arg1 ;
-(void)dealloc;
-(id)URL;
-(id)distribution;
-(id)productType;
-(char)evaluateTrustReturningError:(id*)arg1 ;
-(id)allPackageReferences;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)distributionContainer;
-(id)_archiveForTrustEvaluation;
@end

