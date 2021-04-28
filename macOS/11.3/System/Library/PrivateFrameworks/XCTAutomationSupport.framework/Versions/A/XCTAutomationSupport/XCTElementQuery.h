/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <XCTAutomationSupport/XCTCapabilitiesProviding.h>

@protocol XCTElementSnapshotProvider, XCTElementSnapshotAttributeDataSource;
@class XCAccessibilityElement, XCTTimeoutControls, XCElementSnapshot, NSArray, NSDictionary, NSSet, NSString;

@interface XCTElementQuery : NSObject <NSSecureCoding, XCTCapabilitiesProviding> {

	char _isMacOS;
	char _suppressAttributeKeyPathAnalysis;
	char _useLegacyElementType;
	XCAccessibilityElement* _rootElement;
	unsigned long long _options;
	XCTTimeoutControls* _timeoutControls;
	id<XCTElementSnapshotProvider> _snapshotProvider;
	id<XCTElementSnapshotAttributeDataSource> _elementSnapshotAttributeDataSource;
	XCElementSnapshot* _rootElementSnapshot;
	/*^block*/id _evaluationContext;
	NSArray* _transformers;

}

@property (copy,readonly) NSArray * transformers;                                                             //@synthesize transformers=_transformers - In the implementation block
@property (retain) XCElementSnapshot * rootElementSnapshot;                                                   //@synthesize rootElementSnapshot=_rootElementSnapshot - In the implementation block
@property (assign) char useLegacyElementType;                                                                 //@synthesize useLegacyElementType=_useLegacyElementType - In the implementation block
@property (copy,readonly) XCAccessibilityElement * rootElement;                                               //@synthesize rootElement=_rootElement - In the implementation block
@property (readonly) unsigned long long options;                                                              //@synthesize options=_options - In the implementation block
@property (readonly) char isMacOS;                                                                            //@synthesize isMacOS=_isMacOS - In the implementation block
@property (retain) XCTTimeoutControls * timeoutControls;                                                      //@synthesize timeoutControls=_timeoutControls - In the implementation block
@property (copy,readonly) NSArray * snapshotAttributes; 
@property (copy,readonly) NSDictionary * snapshotParameters; 
@property (retain) id<XCTElementSnapshotProvider> snapshotProvider;                                           //@synthesize snapshotProvider=_snapshotProvider - In the implementation block
@property (__weak) id<XCTElementSnapshotAttributeDataSource> elementSnapshotAttributeDataSource;              //@synthesize elementSnapshotAttributeDataSource=_elementSnapshotAttributeDataSource - In the implementation block
@property (readonly) char supportsAttributeKeyPathAnalysis; 
@property (assign) char suppressAttributeKeyPathAnalysis;                                                     //@synthesize suppressAttributeKeyPathAnalysis=_suppressAttributeKeyPathAnalysis - In the implementation block
@property (copy,readonly) NSSet * elementTypes; 
@property (nonatomic,copy) id evaluationContext;                                                              //@synthesize evaluationContext=_evaluationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(void)provideCapabilitiesToBuilder:(id)arg1 ;
+(id)_descriptionForTransformerArray:(id)arg1 ;
+(id)_firstMatchTransformerSubarraysFromArray:(id)arg1 trailingMatchAllTransformers:(id*)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(XCAccessibilityElement *)rootElement;
-(id)evaluationContext;
-(NSArray *)transformers;
-(char)isMacOS;
-(char)canBeRemotelyEvaluatedWithCapabilities:(id)arg1 ;
-(char)supportsAttributeKeyPathAnalysis;
-(NSSet *)elementTypes;
-(void)setSnapshotProvider:(id<XCTElementSnapshotProvider>)arg1 ;
-(void)setElementSnapshotAttributeDataSource:(id<XCTElementSnapshotAttributeDataSource>)arg1 ;
-(id)matchingSnapshotsWithRelatedElements:(id*)arg1 noMatchesMessage:(id*)arg2 error:(id*)arg3 ;
-(XCElementSnapshot *)rootElementSnapshot;
-(XCTTimeoutControls *)timeoutControls;
-(id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(unsigned long long)arg3 isMacOS:(char)arg4 ;
-(id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(unsigned long long)arg3 isMacOS:(char)arg4 timeoutControls:(id)arg5 ;
-(void)setSuppressAttributeKeyPathAnalysis:(char)arg1 ;
-(void)setUseLegacyElementType:(char)arg1 ;
-(char)suppressAttributeKeyPathAnalysis;
-(char)useLegacyElementType;
-(char)hasTransformerWithStopsOnFirstMatch;
-(id<XCTElementSnapshotAttributeDataSource>)elementSnapshotAttributeDataSource;
-(id)_snapshotForElement:(id)arg1 error:(id*)arg2 ;
-(id<XCTElementSnapshotProvider>)snapshotProvider;
-(NSArray *)snapshotAttributes;
-(NSDictionary *)snapshotParameters;
-(id)_rootElementSnapshot:(id*)arg1 ;
-(id)matchingSnapshotsInSnapshotTree:(id)arg1 relatedElements:(id*)arg2 noMatchesMessage:(id*)arg3 error:(id*)arg4 ;
-(void)setRootElementSnapshot:(XCElementSnapshot *)arg1 ;
-(id)_firstMatchingSnapshotForInput:(id)arg1 transformersSubarrays:(id)arg2 relatedElements:(id*)arg3 noMatchesMessage:(id*)arg4 error:(id*)arg5 ;
-(id)_allMatchingSnapshotsForInput:(id)arg1 transformers:(id)arg2 relatedElements:(id*)arg3 noMatchesMessage:(id*)arg4 error:(id*)arg5 ;
-(id)_firstMatchingSnapshotForInput:(id)arg1 transformers:(id)arg2 relatedElements:(id*)arg3 noMatchesMessage:(id*)arg4 error:(id*)arg5 ;
-(id)initWithRootElement:(id)arg1 transformers:(id)arg2 ;
-(id)initWithRootElement:(id)arg1 transformers:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setTimeoutControls:(XCTTimeoutControls *)arg1 ;
-(void)setEvaluationContext:(id)arg1 ;
@end

