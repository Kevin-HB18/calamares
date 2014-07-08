/* === This file is part of Calamares - <http://github.com/calamares> ===
 *
 *   Copyright 2014, Aurélien Gâteau <agateau@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CREATEPARTITIONJOB_H
#define CREATEPARTITIONJOB_H

#include <Job.h>

class Device;
class Partition;
class FileSystem;

class CreatePartitionJob : public Calamares::Job
{
    Q_OBJECT
public:
    CreatePartitionJob( Device* device, Partition* partition );
    QString prettyName() override;
    Calamares::JobResult exec() override;

    void updatePreview();
    Device* device() const
    {
        return m_device;
    }

    Partition* partition() const
    {
        return m_partition;
    }

private:
    Device* m_device;
    Partition* m_partition;
};

#endif /* CREATEPARTITIONJOB_H */
