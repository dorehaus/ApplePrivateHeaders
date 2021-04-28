/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPPackageWriteCoordinator.h>

@class TSPPackageWriteCoordinator;

@interface TSPSupportPackageWriteCoordinator : TSPPackageWriteCoordinator {

	TSPPackageWriteCoordinator* _packageWriteCoordinator;

}
-(id)objectForIdentifier:(long long)arg1 ;
-(id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 packageIdentifier:(unsigned char)arg6 fileFormatVersion:(unsigned long long)arg7 preferredPackageType:(long long)arg8 metadataObject:(id)arg9 dataAttributesSnapshot:(id)arg10 ;
-(id)initWithContext:(id)arg1 archiverClass:(Class)arg2 archiverFlags:(char)arg3 documentRevision:(id)arg4 saveToken:(unsigned long long)arg5 fileFormatVersion:(unsigned long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9 ;
-(void)didReferenceData:(id)arg1 ;
-(char)shouldEnqueueComponent:(id)arg1 ;
-(char)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(char)isComponentExternalWithIdentifier:(long long)arg1 wasCopied:(char*)arg2 componentReadVersion:(unsigned long long*)arg3 ;
-(char)isObjectWrittenInExternalPackageWithIdentifier:(long long)arg1 ;
-(char)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3 componentReadVersion:(unsigned long long*)arg4 ;
-(long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 outComponentIsVersioned:(char*)arg4 ;
-(char)wasComponentCopied:(long long)arg1 ;
@end

