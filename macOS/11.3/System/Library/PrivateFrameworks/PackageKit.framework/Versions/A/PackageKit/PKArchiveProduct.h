/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKMutableProduct.h>

@class PKArchive, PKDistributionContainer, NSMutableDictionary, NSString;

@interface PKArchiveProduct : PKMutableProduct {

	PKArchive* _archive;
	PKDistributionContainer* _container;
	NSMutableDictionary* _packageIdentifierToURLMap;
	NSString* _productIdentifier;
	NSString* _productVersion;
	NSString* _scriptsPath;
	NSString* _installerPluginsPath;

}
+(char)canInitWithURL:(id)arg1 ;
-(id)stringsDictionary;
-(id)_identifierVersionTuple:(id)arg1 ;
-(id)_initWithPath:(id)arg1 error:(id*)arg2 ;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(char)_writeCompressedCPIOForRoot:(id)arg1 intoArchivePath:(id)arg2 error:(id*)arg3 ;
-(id)initForWritingToArchive:(id)arg1 signingDelegate:(id)arg2 error:(id*)arg3 ;
-(char)unregisterPackageReference:(id)arg1 deletePackage:(char)arg2 ;
-(void)dealloc;
-(id)URL;
-(char)commitReturningError:(id*)arg1 ;
-(char)setDistribution:(id)arg1 ;
-(id)distribution;
-(id)productVersion;
-(id)productType;
-(id)productIdentifier;
-(id)allPackageReferences;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(void)setProductIdentifier:(id)arg1 version:(id)arg2 ;
-(id)suggestedPackagePathFromPackageReference:(id)arg1 ;
-(char)registerPackageReference:(id)arg1 ;
-(id)distributionContainer;
-(id)_archiveForTrustEvaluation;
-(char)addResourceDataAtPath:(id)arg1 ;
-(char)setDistributionFromContainer:(id)arg1 ;
-(void)_setScriptsPath:(id)arg1 ;
-(void)_setInstallerPluginsPath:(id)arg1 ;
@end

