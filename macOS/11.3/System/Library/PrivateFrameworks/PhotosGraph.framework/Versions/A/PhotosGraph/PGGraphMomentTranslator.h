/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphMomentTranslator : PGGraphEntityTranslator
+(id)entityClassName;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)momentUpdateTypeByMomentProperty;
-(id)highlightUpdateTypeByMomentProperty;
@end

