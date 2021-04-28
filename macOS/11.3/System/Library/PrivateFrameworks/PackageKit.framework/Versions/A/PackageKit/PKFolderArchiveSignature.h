/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKArchiveSignature.h>

@interface PKFolderArchiveSignature : PKArchiveSignature {

	SecCodeRef _staticCode;

}
-(id)signedDataReturningAlgorithm:(id*)arg1 ;
-(id)signatureDataReturningAlgorithm:(id*)arg1 ;
-(char)verifyCodeSignatureIncludingSealedResources:(char)arg1 error:(id*)arg2 ;
-(id)initWithArchiveAtPath:(id)arg1 ;
-(void)dealloc;
-(char)verifySignedDataReturningError:(id*)arg1 ;
-(id)certificateRefs;
-(id)algorithmType;
@end

