/*
 * PROPRIETARY INFORMATION.  This software is proprietary to
 * Side Effects Software Inc., and is not to be reproduced,
 * transmitted, or disclosed in any way without written permission.
 *
 * Produced by:
 *      Damian Campeanu
 *      Side Effects Software Inc
 *      123 Front Street West, Suite 1401
 *      Toronto, Ontario
 *      Canada   M5J 2M2
 *      416-504-9876
 *
 */

#pragma once

class FHoudiniAssetComponentInstanceData : public FComponentInstanceDataBase
{
public:

	FHoudiniAssetComponentInstanceData();
	virtual ~FHoudiniAssetComponentInstanceData();

public: /** FComponentInstanceDataBase methods. **/

	virtual FName GetDataTypeName() const OVERRIDE;

public:

	static const FName InstanceDataTypeName;

public:

	
};