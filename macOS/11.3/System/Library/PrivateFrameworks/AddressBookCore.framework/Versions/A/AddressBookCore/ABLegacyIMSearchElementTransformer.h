/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABSearchElementTransformer.h>

@interface ABLegacyIMSearchElementTransformer : ABSearchElementTransformer
+(id)sharedLegacyIMTransformer;
-(id)transformSearchElement:(id)arg1 ;
-(id)transformConjunction:(id)arg1 ;
-(char)isLegacyIMSearchElement:(id)arg1 ;
-(id)recursivelyTransformChildren:(id)arg1 ;
-(id)convertToModernIMSearchElement:(id)arg1 ;
@end
