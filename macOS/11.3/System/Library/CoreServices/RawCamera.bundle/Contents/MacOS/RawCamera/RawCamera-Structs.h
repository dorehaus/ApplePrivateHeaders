/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct shared_ptr<CRawImage> {
	CRawImage __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<CRawImage>;

typedef struct weak_ptr<CRawImage> {
	CRawImage __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<CRawImage>;

typedef struct shared_ptr<CRawImageFujiBase> {
	CRawImageFujiBase __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<CRawImageFujiBase>;

typedef struct weak_ptr<CRawImageFujiBase> {
	CRawImageFujiBase __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<CRawImageFujiBase>;

typedef struct otrc_s {
	float s0;
	float y1;
	float s1;
	float y2;
	float s2;
	float y3;
	float s3;
	float s4;
	BOOL disabled;
} otrc_s;

typedef struct reconstructionDataV2_s {
	unsigned pattern;
	int bitmapType;
	BOOL despeckleBlackNoiseEnabled;
	BOOL blackLevelExtendEnabled;
	float blackDespeckleNoiseFactor;
	float noiseEstimate;
	BOOL greenSplitEnabled;
	BOOL unknownDNGCamera;
	float greenSplitRed;
	float greenSplitGreen1;
	float greenSplitBlue;
	int greenBayerSplit;
	float extendHighlightsThreshold;
	BOOL HREnabled;
	float HRGreenClip;
	BOOL SPEEnabled;
	BOOL SPERobust;
	float SPENoiseFactor1;
	float SPENoiseFactor2;
	BOOL NREnabled;
	float NRNoiseFactor;
	BOOL CACorrectionEnabled;
	float CACorrectionRedPower;
	float CACorrectionBluePower;
	float CACorrectionRedScale;
	float CACorrectionBlueScale;
	int fullWidth;
	int fullHeight;
	BOOL vignetteCorrectionEnabled;
	float vignetteCorrectionPower;
	float vignetteCorrectionAmount;
	float chromaBlurHighFrequencyThreshold;
	float highFrequencyNoiseFactor;
	int highFrequencySignalType;
	int gradientSignalType;
	int halfSizeMethod;
	float halfSizeImageGreenFraction;
	BOOL halfSizeHack;
	int fringeProcessingEnabled;
	int fringeProcessingMethod;
	float fringeProcessingThreshold1;
	float fringeProcessingThreshold2;
	float fringeProcessingNoiseFactor;
	BOOL chromaBlurEnabled;
	BOOL noAntiAliasingFilter;
	BOOL powerBlurThreePass;
	BOOL gradientProcessing;
	float chromaBlurRadius;
	float chromaBlurRadius2;
	float powerBlurNoiseFactor;
	float chromaBlurEdgeThreshold;
	float chromaBlurEdgeThreshold2;
	float gradientThreshold;
	int adaptiveNormalizationMethod;
	int adaptiveNormalizationHard;
	float adaptiveNormalizationNoiseFactor;
	float normalizeOffsetFraction;
	float directionNoiseFactor;
	float directionLowThreshold;
	BOOL verticalCorrelationEnabled;
	float verticalCorrelationThreshold;
	float verticalEdgeThreshold;
	float verticalFlatnessThreshold;
	BOOL horizontalCorrelationEnabled;
	float horizontalCorrelationThreshold;
	float horizontalEdgeThreshold;
	BOOL diagonalCorrelationEnabled;
	float diagonalCorrelationThreshold;
	int correlationOldStyle;
	BOOL correlationHack;
	BOOL greenDespeckleEnabled;
	float greenDespeckleThreshold;
	int greenDespeckleDiagonalImprovement;
	int interpolationType;
	int extendedHighlightSmoothingType;
	BOOL sharpenEdgesEnabled;
	float sharpenRadius;
	float sharpenIntensity;
	float sharpenAbsoluteLimit;
	float sharpenEdgeIntensity;
	float sharpenEdgeMaskSoftness;
	float sharpenNoiseFactor;
	BOOL redBlueNoiseReductionEnabled;
	BOOL redBlueHack;
	int chromaScaleMethod;
	BOOL chromaScaleHard;
	float chromaScaleDetailFactor;
	float minimumSignalToNoiseRatio;
	float maximumSignalToNoiseRatio;
	float maximumDetailDifference;
	float factors[3];
	float RVector[3];
	float GVector[3];
	float BVector[3];
	float bias[3];
	float blacks[4];
	float clipLevels[3];
	int biasOff;
	BOOL boostEnabled;
	otrc_s otrc;
	float gamma;
	float hueMagMR;
	float hueMagRY;
	float hueMagYG;
	float hueMagGC;
	float hueMagCB;
	float hueMagBM;
	float shadowDesaturatePoint;
	float shadowDesaturateWidth;
	float shadowDesaturateAmount;
	float xScale;
	float yScale;
	int noiseARegressionType;
	float noiseACCoefficient;
	float noiseADCoefficient;
	float noiseAECoefficient;
	int noiseBRegressionType;
	float noiseBCCoefficient;
	float noiseBDCoefficient;
	float noiseBECoefficient;
	int noiseISOPin;
	int ISO;
	BOOL cameraV2PlusHighlightNoiseCharacterized;
	float breakpointFraction;
	int noiseAHRegressionType;
	float noiseAHCCoefficient;
	float noiseAHDCoefficient;
	float noiseAHECoefficient;
	int noiseBHRegressionType;
	float noiseBHCCoefficient;
	float noiseBHDCoefficient;
	float noiseBHECoefficient;
	int noiseAH2RegressionType;
	float noiseAH2CCoefficient;
	float noiseAH2DCoefficient;
	float noiseAH2ECoefficient;
	int noiseBH2RegressionType;
	float noiseBH2CCoefficient;
	float noiseBH2DCoefficient;
	float noiseBH2ECoefficient;
	float fujiHigh;
	float hilitefactors[3];
	BOOL cameraV2PlusByTable;
	float isoab[50][3];
} reconstructionDataV2_s;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _NSZone* NSZoneRef;

